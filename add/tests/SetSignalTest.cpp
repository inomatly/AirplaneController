#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

extern "C" {
#include "src/artificialBird_Controller.X/headers/SetSignal.h"
}

//*****************************
// テストグループ
//*****************************
TEST_GROUP(SetSignalUT){
    void setup(){
        SignalClear();
        g_SpeedRefCount=0;
        g_PitchRefCount=0;
        g_YawRefCount=0;
    }
    void teardown(){
        ;
    }
};//TEST_GROUPには「;」が必要。構造体で実装しているらしい。

//*****************************
// テスト
//*****************************

/**
 * @brief TransrateRefThresholdの動作確認（最小値）
 * 
 */
TEST(SetSignalUT, TransrateRefThreshold_min) {
    // Arrange
    int output=0;
    int input=-8;
    // Act
    output=TransrateRefThreshold(input);
    
    // Assert
    CHECK_EQUAL(1, output);
}

/**
 * @brief TransrateRefThresholdの動作確認（最大値）
 * 
 */
TEST(SetSignalUT, TransrateRefThreshold_max) {
    // Arrange
    int output=0;
    int input=8;
    // Act
    output=TransrateRefThreshold(input);
    
    // Assert
    CHECK_EQUAL(17, output);
}

/**
 * @brief g_SignalRow[]の更新
 * @param g_SpeedRefCount グローバル変数を参照する
 * @param g_PitchRefCount グローバル変数を参照する
 * @param g_YawRefCount グローバル変数を参照する
 */
TEST(SetSignalUT, UpdateSignalRow) {
    // Arrange
    g_SpeedRefCount=0;
    g_PitchRefCount=1;
    g_YawRefCount=2;

    // Act
    UpdateSignalRow();
    
    // Assert
    CHECK_EQUAL(0, g_SignalRow[0]);
    CHECK_EQUAL(1, g_SignalRow[1]);
    CHECK_EQUAL(2, g_SignalRow[2]);
    CHECK_EQUAL(0, g_SignalRow[3]);
}

/**
 * @brief g_SignalRow[]の上限・下限の確認
 * @param g_SpeedRefCount グローバル変数を参照する
 * @param g_PitchRefCount グローバル変数を参照する
 * @param g_YawRefCount グローバル変数を参照する
 */
TEST(SetSignalUT, SignalRowLimit) {
    // Arrange
    g_SpeedRefCount=9;
    g_PitchRefCount=-9;
    g_YawRefCount=99;

    // Act
    UpdateSignalRow();
    
    // Assert
    CHECK_EQUAL(8, g_SignalRow[0]);
    CHECK_EQUAL(-8, g_SignalRow[1]);
    CHECK_EQUAL(8, g_SignalRow[2]);
    CHECK_EQUAL(0, g_SignalRow[3]);
}

/**
 * @brief 初期化のテスト
 */
TEST(SetSignalUT, SignalClear){
    // Arange

    // Act
    SignalClear();

    // Assert
    CHECK_EQUAL(0, SignalStepper);
    for(int i=0; i<4; i++){
        CHECK_EQUAL(0, g_SignalRow[i]);
    }
    CHECK_EQUAL(0, SignalStepper);
    CHECK_EQUAL(0, CurrentSignalIndex);
}

/**
 * @brief 内部状態変数SignalStepper=1の時，1を返す。
 * 
 */
TEST(SetSignalUT, StateFirst) {
    // Arrange
    int result = 999;

    // Act
    result = SetOutput();
    
    // Assert
    CHECK_EQUAL(1, SignalStepper);
    CHECK_EQUAL(1, result);
    CHECK_EQUAL(0, CurrentSignalIndex);
}

/**
 * @brief 内部状態変数SignalStepper=2の時，0を返す。
 * 
 */
TEST(SetSignalUT, StateSecond) {
    // Arrange
    int result = 999;
    // Act
    SetOutput();
    result = SetOutput();
    // Assert
    CHECK_EQUAL(2, SignalStepper);
    CHECK_EQUAL(0, result);
    CHECK_EQUAL(0, CurrentSignalIndex);
}

/**
 * @brief g_SignalRowが-8のときの動作を確認
 * 
 */
TEST(SetSignalUT, SignalRowMinusEight) {
    // Arrange
    g_SignalRow[0] = -8;
    int count=3;
    int output[count]={0,0,0};

    // Act
    for(int i=0; i<count; i++){// StateStepper 0 -> 3
        output[i]=SetOutput();
    }
    
    // Assert
    CHECK_EQUAL(1, output[0]); 
    CHECK_EQUAL(0, output[1]); 
    CHECK_EQUAL(1, output[2]); 
    CHECK_EQUAL(1, SignalStepper);      //ch2に移行
    CHECK_EQUAL(1, CurrentSignalIndex); //ch2に移行
}

/**
 * @brief g_SignalRowが8のときの動作を確認
 * 
 */
TEST(SetSignalUT, SignalRowEight) {
    // Arrange
    g_SignalRow[0] = 8;
    int count=18;
    int output[count];

    // Act
    for(int i=0; i<count+1; i++){
        //printf("i:%d:",i);
        output[i]=SetOutput();
        //printf("output[%d]:%d\n", i,output[i]);
    }
    
    // Assert
    CHECK_EQUAL(1, output[0]); 
    CHECK_EQUAL(0, output[1]);
    for(int i=0; i<count-2; i++){
        CHECK_EQUAL(0, output[i+2]); 
    }
    CHECK_EQUAL(1, CurrentSignalIndex); //ch2に移行
}

/**
 * @brief g_SignalRowが0のときの動作を確認
 * 
 */
TEST(SetSignalUT, SignalRowZero) {
    // Arrange
    g_SignalRow[0] = 0;
    int count=10;
    int output[count];

    // Act
    for(int i=0; i<count+2; i++){
        output[i]=SetOutput();
    }
    
    // Assert
    CHECK_EQUAL(1, output[0]); 
    CHECK_EQUAL(0, output[1]);
    for(int i=2; i<9; i++){
        CHECK_EQUAL(0, output[i]); 
    }
    CHECK_EQUAL(1, output[10]); 
    CHECK_EQUAL(1, CurrentSignalIndex); //ch2に移行
}

/**
 * @brief ch1からch3，終端信号への移行
 * 
 */
TEST(SetSignalUT, SignalRowChangeChannel) {
    // Arrange
    g_SignalRow[0] = -8;
    g_SignalRow[1] = -8;
    g_SignalRow[2] = -8;
    int output[9]={0,0,0,0,0,0,0,0,0};

    // Act
    for(int i=0; i<10; i++){//信号の個数2*3に＋3回
        output[i]=SetOutput();
    }
    
    // Assert
    CHECK_EQUAL(1, output[0]); //ch1
    CHECK_EQUAL(0, output[1]); //ch1
    CHECK_EQUAL(1, output[2]); //ch2
    CHECK_EQUAL(0, output[3]); //ch2
    CHECK_EQUAL(1, output[4]); //ch3
    CHECK_EQUAL(0, output[5]); //ch3
    CHECK_EQUAL(1, output[6]); //終端信号
    CHECK_EQUAL(1, output[7]); //終端信号(case 3)
    CHECK_EQUAL(1, output[8]); //終端信号(case 3)
    CHECK_EQUAL(1, output[9]); //ch1の先頭のON
    CHECK_EQUAL(0, CurrentSignalIndex); //ch1
}

/**
 * @brief 一例
 * 
 */
TEST(SetSignalUT, SignalRowExample) {
    // Arrange
    g_SignalRow[0] = -8;
    g_SignalRow[1] = -7;
    g_SignalRow[2] = -8;
    int output[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    // Act
    for(int i=0; i<15; i++){//信号の個数2*3に＋4回
        output[i]=SetOutput();
    }
       
    // Assert
    CHECK_EQUAL(1, output[0]); //ch1
    CHECK_EQUAL(0, output[1]); //ch1
    CHECK_EQUAL(1, output[2]); //ch2
    CHECK_EQUAL(0, output[3]); //ch2
    CHECK_EQUAL(0, output[4]); //ch2
    CHECK_EQUAL(1, output[5]); //ch3
    CHECK_EQUAL(0, output[6]); //ch3
    CHECK_EQUAL(1, output[7]); //終端信号
    CHECK_EQUAL(1, output[8]); //終端信号(case 3)
    CHECK_EQUAL(1, output[9]); //終端信号(case 3)
    CHECK_EQUAL(1, output[10]); //ch1の先頭のON
    CHECK_EQUAL(0, output[11]); //ch1
}


