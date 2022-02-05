#include <gtest/gtest.h>

#include <questions/largest_three/sort_method.hpp>

#include <vector>

TEST(ASortMethod, handlesInvalidInput) {
    std::vector<int> input{-1,2};
    EXPECT_THROW(largest_product_sort(input), std::runtime_error);
}

TEST(ASortMethod, handlesTrivialCase) {
    std::vector<int> input{2, -1, 5};
    const int result = largest_product_sort(input);
    EXPECT_EQ(result, -1 * 2 * 5);
}

TEST(ASortMethod, handlesSortedInput) {
    std::vector<int> input{2, 4, 6, 8, 9, 11};
    const int result = largest_product_sort(input);
    const size_t size = input.size();
    EXPECT_EQ(result, input[size-1] * input[size-2] *input[size-3]);
}

TEST(ASortMethod, handlesUnsortedPositiveInput) {
    std::vector<int> input{4, 3, 7, 2, 1, 6};
    const int result = largest_product_sort(input);
    EXPECT_EQ(result, 4*6*7);
}
