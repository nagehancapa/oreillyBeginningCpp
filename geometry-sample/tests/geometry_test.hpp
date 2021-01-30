#ifndef GEOMETRY_TEST_HPP_
#define GEOMETRY_TEST_HPP_

#include "gtest/gtest.h"
#include "geometry.h"

TEST(GeometryTests, AreaOfSquareTest) {
	EXPECT_DOUBLE_EQ(25, area_of_square(5, 5));
	EXPECT_DOUBLE_EQ(100, area_of_square(10, 10));
	EXPECT_DOUBLE_EQ(400, area_of_square(20, 20));
}

TEST(GeometryTests, AreaOfSquareWhereSidesAreNotEqualTest) {
	ASSERT_TRUE(area_of_square(3, 4) < 0);
}

TEST(GeometryTests, AreaOfTriangle) {
	EXPECT_DOUBLE_EQ(15, area_of_triangle(6, 5));
	EXPECT_DOUBLE_EQ(35, area_of_triangle(10, 7));
	EXPECT_DOUBLE_EQ(140, area_of_triangle(20, 14));	
}

TEST(GeometryTests, AreaOfCircle) {
	EXPECT_DOUBLE_EQ(50.26544, area_of_circle(4));
	EXPECT_DOUBLE_EQ(113.09724, area_of_circle(6));
	EXPECT_DOUBLE_EQ(1079.863757244, area_of_circle(18.54));
}
#endif // GEOMETRY_TEST_HPP_