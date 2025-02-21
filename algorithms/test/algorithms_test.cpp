#include <gtest/gtest.h>

#include "../include/algo.hpp"

// Demonstrate some basic assertions.
TEST(FIBBONACCI_TEST, BasicAssertions) {
    // Expect equality.
    const long result = fibonacci(5);

    EXPECT_EQ(result, 5);
}

TEST(LINEAR_SEARCH_TEST, BasicAssertions) {
    int input[5] = {1, 3, 5, 6, 5};
    Array* array = init(5, input);
    const int idx_result = linear_search(array, 3);

    EXPECT_EQ(idx_result, 1);
}
