#include <gtest/gtest.h>

#include <stack>

TEST(DEFAULT, BasicAssertions) {
    // TODO: REPLACE WITH REAL TESTS
    EXPECT_EQ(1, 1);
}

TEST(EMPTY_STACK_TOP_TEST, BasicAssertions) {
    std::stack<int> x = {};

    int y = 0;
    if (!x.empty()) {
        y = x.top();
    }

    ASSERT_EQ(0, y);
}
