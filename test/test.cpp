
#include "gtest/gtest.h"
#include <iostream>
#include "LinearInterpolate.h"

TEST(LinearInterpolate, FromZero) {
	auto result = linearInterpolate(0.0,0.0,0.0,0.0,0.0);
	EXPECT_EQ(result, 0.0);
}

TEST(LinearInterpolate, From100) {
	auto result = linearInterpolate(10.0,100.0,0.0,0.0,0.0);
	EXPECT_NE(result, 0.0);
}


int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);

	std::cout << "GOOGLE TESTING" << std::endl;

	return RUN_ALL_TESTS();
}