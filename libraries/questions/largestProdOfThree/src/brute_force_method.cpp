#include <questions/largestProdOfThree/brute_force_method.hpp>
#include <questions/largestProdOfThree/common.hpp>

#include <limits>

int largest_product_brute_force(const std::vector<int>& input)
{
    sanity_check(input);
    const auto res = trivial_case_check(input);
    if (res) return *res;

    int max_prod = std::numeric_limits<int>::min();
    for (size_t i = 0; i < input.size(); ++i) {
        for (size_t j = i+1; j < input.size(); ++j) {
            for (size_t k = j+1; k < input.size(); ++k) {
                const int prod = input[i] * input[j] * input[k];
                if (prod > max_prod) {
                    max_prod = prod;
                }
            }
        }
    }

    return max_prod;
}
