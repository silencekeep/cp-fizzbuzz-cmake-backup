#include "gtest/gtest.h"
#include "utils.h"
 
TEST(testCase, test1) 
{
    EXPECT_EQ(fizzBuzz(1), "1"); 
}

TEST(testCase, test2) 
{
    EXPECT_EQ(fizzBuzz(2), "2"); 
}

TEST(testCase, test3) 
{
    EXPECT_EQ(fizzBuzz(3), "Fizz"); 
}

TEST(testCase, test5) 
{
    EXPECT_EQ(fizzBuzz(5), "Buzz"); 
}
 
int main(int argc, char* argv[]){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    cout << 6 << endl;
    cerr << argc << endl;
    return 0;
}