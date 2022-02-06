#include <iostream>
#include <vector>

#include "inputs.hpp"
#include <questions/largestProdOfThree/sort_method.hpp>
#include <questions/largestProdOfThree/queue_method.hpp>


int main()
{
    const std::vector<int> input = next_input();
    std::cout << largest_product_sort(input) << std::endl;
    std::cout << largest_product_queue(input) << std::endl;
    return 0;
}
