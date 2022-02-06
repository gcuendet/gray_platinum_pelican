#include <gtest/gtest.h>

#include <questions/largestProdOfThree/brute_force_method.hpp>

#include <vector>

TEST(ABruteForceMethod, handlesSortedInput) {
    std::vector<int> input{2, 4, 6, 8, 9, 11};
    const int result = largest_product_brute_force(input);
    const size_t size = input.size();
    EXPECT_EQ(result, input[size-1] * input[size-2] *input[size-3]);
}

TEST(ABruteForceMethod, handlesUnsortedPositiveInput) {
    std::vector<int> input{4, 3, 7, 2, 1, 6};
    const int result = largest_product_brute_force(input);
    EXPECT_EQ(result, 4*6*7);
}
