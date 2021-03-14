#ifndef FIND_TEST_HPP_
#define FIND_TEST_HPP_

#include "gtest/gtest.h"
#include <algorithm>
#include <string>

#include "find.hpp"

TEST(FindTest, findFindsValueInStringArray) {
	std::string fruits[] = {"apple", "banana", "cranberry", "orange"};
	std::string actual = find("banana", fruits, 0, 3);
	ASSERT_STREQ("banana", actual.c_str());
}

#endif // FIND_TEST_HPP_