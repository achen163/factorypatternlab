#include "gtest/gtest.h"

#include "factory.hpp"
int main(int argc, char **argv) {
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}

TEST(AddOpTest, TestTwoDigitNum) { // 30 + 32
	char* test[4];
	test[0] = "./calculator"; test[1] = "30"; test[2] = "+"; test[3] = "32";
	Factory* f = new Factory();
	EXPECT_EQ(f->parser(4, test)->evaluate(), 62);
}

TEST(ExpressionTest, TestExpression) { // 2 ** 3 + 2 - 16 
	char* args[8];
	args[0] = "./calculator";
	args[1] = "2";
	args[2] = "**";
	args[3] = "3";
	args[4] = "+";
	args[5] = "2";
	args[6] = "-";
	args[7] = "16";

	Factory* f2 = new Factory();
	EXPECT_EQ(f2->parser(8, args)->evaluate(), -6);
}

TEST(ExpressionTest, TestDivideThreeDigit) {
	char* test3[4];
	test3[0] = "./calculator";
	test3[1] = "500";
	test3[2] = "/";
	test3[3] = "100";
	
	Factory* f3 = new Factory();
	EXPECT_EQ(f3->parser(4, test3)->evaluate(), 5);
}

TEST(InvalidInputTest, TestInvalidInput) {
	char* test4[2];
	test4[0] = "./calculator";
	test4[1] = "2";
	Factory* f4 = new Factory();
	EXPECT_EQ(f4->parser(2, test4), nullptr);
}
