#include <questions/largest_three/queue_method.hpp>
#include <questions/largest_three/common.hpp>

#include <queue>

/**
 * Computes the largest product of three int from a list by traversing the list and storing the largest three and smallest two elements
 *
 * Time complexity is O(N) and
 * Space complexity is O(1)
 *
 * Data structure:
 * ---------------
 * - priority_queue
 */
int largest_product_queue(const std::vector<int> &input)
{
    sanity_check(input);
    const auto res = trivial_case_check(input);
    if (res) return *res;

    std::priority_queue<int, std::vector<int>, std::greater<int>> largest_three;
    std::priority_queue<int, std::vector<int>, std::less<int>> smallest_two;

    for (const auto& element : input)
    {
        if (largest_three.size() < 3)
            largest_three.push(element);
        else if (element > largest_three.top())
        {
            largest_three.pop();
            largest_three.push(element);
        }

        if (smallest_two.size() < 2)
            smallest_two.push(element);
        else if(element < smallest_two.top())
        {
            smallest_two.pop();
            smallest_two.push(element);
        }
    }

    int c1 = largest_three.top();
    largest_three.pop();
    c1 *= largest_three.top();
    largest_three.pop();
    const int largest = largest_three.top();
    c1 *= largest;
    int c2 = smallest_two.top();
    smallest_two.pop();
    c2 *= smallest_two.top() * largest;
    return std::max(c1, c2);
}
