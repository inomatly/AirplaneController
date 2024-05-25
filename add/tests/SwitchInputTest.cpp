
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

extern "C" {
#include "src/artificialBird_Controller.X/headers/SwitchInput.h"
}

TEST_GROUP(SwitchInoutUT){
    void setup(){
        ;
    }
    void teardown(){
        ;
    }
};//TEST_GROUPには「;」が必要。構造体で実装しているらしい。

/**
 * @brief SW呼び出しでグローバル変数を更新するテスト
 */
TEST(SwitchInoutUT, SW_PitchUP){
    // Arrange
    g_PitchRefCount=0;
    // Act
    UpdatePitchUP();
    UpdatePitchUP();

    // Assert
    CHECK_EQUAL(2, g_PitchRefCount);
}

/**
 * @brief SW呼び出しでグローバル変数を更新するテスト
 */
TEST(SwitchInoutUT, SW_PitchDown){
        // Arrange
    g_PitchRefCount=0;
    // Act
    UpdatePitchDown();
    UpdatePitchDown();

    // Assert
    CHECK_EQUAL(-2, g_PitchRefCount);
}

/**
 * @brief SW呼び出しでグローバル変数を更新するテスト
 */
TEST(SwitchInoutUT, SW_YawUP){
    // Arrange
    g_YawRefCount = 0;
    // Act
    UpdateYawUP();
    UpdateYawUP();
    // Assert
    CHECK_EQUAL(2, g_YawRefCount);
}

/**
 * @brief SW呼び出しでグローバル変数を更新するテスト
 */
TEST(SwitchInoutUT, SW_YawDown){
    // Arrange
    g_YawRefCount = 0;
    // Act
    UpdateYawDown();
    UpdateYawDown();
    // Assert
    CHECK_EQUAL(-2, g_YawRefCount);
}

/**
 * @brief SW呼び出しでグローバル変数を更新するテスト
 */
TEST(SwitchInoutUT, SW_SpeedUP){
    // Arrange
    g_SpeedRefCount = 0;
    // Act
    UpdateSpeedUP();
    UpdateSpeedUP();
    // Assert
    CHECK_EQUAL(2, g_SpeedRefCount);
}

/**
 * @brief SW呼び出しでグローバル変数を更新するテスト
 */
TEST(SwitchInoutUT, SW_SpeedDown){
    // Arrange
    g_SpeedRefCount = 0;
    // Act
    UpdateSpeedDown();
    UpdateSpeedDown();
    // Assert
    CHECK_EQUAL(-2, g_SpeedRefCount);
}