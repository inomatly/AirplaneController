#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

extern "C" {
#include "../include/sum.h"
}

TEST_GROUP(sum) {
    void setup(){};
    void teardown() { mock().clear(); }
};

void mockTestSample(void) { mock().actualCall("mockTestSample"); }

TEST(sum, InputPlusValue) {
    // Arrange
    int ret = 0;

    // Act
    ret = sum(3, 4);

    // Assert
    CHECK_EQUAL(ret, 7);
}

TEST(sum, SampleScenario) {
    // Arrange
    mock().expectOneCall("mockTestSample");

    // Act
    mockTestSample();

    // Assert
    mock().checkExpectations();
}

//
// モックの例
//
