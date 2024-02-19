//Operation classes
#include "../operations/operation_handlers/Number.cpp"
#include "../operations/operation_handlers/Add.cpp"
#include "../operations/operation_handlers/Subtract.cpp"
#include "../operations/operation_handlers/Multiply.cpp"
#include "../operations/operation_handlers/Divide.cpp"

#include <gtest/gtest.h>
    
TEST(OperationTest, Number) { 
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0, squareRoot(0.0));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}