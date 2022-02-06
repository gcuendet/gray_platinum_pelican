#include <exception>
#include <optional>
#include <vector>

/**
 * Collection of sanity checks
 */
inline void sanity_check(const std::vector<int>& input)
{
    if (input.size() < 3)
        throw std::runtime_error("Input array contains less than 3 elements");
}

/**
 * Check for the trivial case
 */
inline std::optional<int> trivial_case_check(const std::vector<int>& input)
{
    // Trivial case of three elements in the input list
    if (input.size() == 3)
        return {input[0] * input[1] * input[2]};

    return {};
}
