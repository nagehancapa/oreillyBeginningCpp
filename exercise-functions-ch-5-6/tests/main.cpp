#include <iostream>
#include "gtest/gtest.h"

#include "find_test.hpp"
#include "aggregate_test.hpp"

int main(int argc, char* argv[]) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}