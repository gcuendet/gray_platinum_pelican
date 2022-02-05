#include "inputs.hpp"

/* constexpr int arr[] = {0,1,2,3,6,18,-29,-19}; */
constexpr int arr[] = {-2,0,1,2,3,6,18,-29,-19};

std::vector<int> next_input()
{
    return std::vector<int>(arr, arr + sizeof(arr) / sizeof(arr[0]));
}
