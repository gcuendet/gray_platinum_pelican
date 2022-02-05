#include <questions/largest_three/sort_method.hpp>
#include <questions/largest_three/common.hpp>

#include <algorithm>
#include <iostream>

int largest_product_sort(const std::vector<int>& input)
{
    sanity_check(input);
    const auto res = trivial_case_check(input);
    if (res) return *res;

    std::vector<int> sorted_input(input.begin(), input.end());
    std::sort(sorted_input.begin(), sorted_input.end());

    const size_t size = sorted_input.size();
    const int c1 = sorted_input[0] * sorted_input[1] * sorted_input[size-1];
    const int c2 = sorted_input[size-3] * sorted_input[size-2] * sorted_input[size-1];

    return std::max(c1, c2);
}
