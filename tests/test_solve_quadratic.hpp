#ifndef TESTS__TEST_SOLVE_QUADRATIC_HPP
#define TESTS__TEST_SOLVE_QUADRATIC_HPP

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <cmath>

#include "solve_quadratic.hpp"

TEST(test_solve_quadratic, base)
{
    ASSERT_THAT(solve_quadratic(1, 0, 0), testing::Pair(-0.0, -0.0));
    ASSERT_THAT(solve_quadratic(1, 0, -1), testing::Pair(-1.0, 1.0));
    ASSERT_THAT(solve_quadratic(1, 4, 3), testing::Pair(-3.0, -1.0));
    ASSERT_THAT(solve_quadratic(1, -2, 1), testing::Pair(1.0, 1.0));
}

TEST(test_solve_quadratic, advanced)
{
    ASSERT_THAT(solve_quadratic(2, 1, 0), testing::Pair(-0.5, 0.0));
    ASSERT_THAT(solve_quadratic(1, 0, -2), testing::Pair(-std::sqrt(2), std::sqrt(2)));
}

TEST(test_solve_quadratic, not_quadratic)
{
    EXPECT_THROW(solve_quadratic(0, 4, 3), not_quadratic);
    EXPECT_THROW(solve_quadratic(0, 2.34, 3432.1), not_quadratic);
}

TEST(test_solve_quadratic, no_rat_roots)
{
    EXPECT_THROW(solve_quadratic(4, 0, 100), no_rat_roots);
    EXPECT_THROW(solve_quadratic(1, 1, 10), no_rat_roots);
}

#endif