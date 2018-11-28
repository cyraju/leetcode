#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target);
    std::vector<int> twoSum_ordered_map(std::vector<int> &nums, int target);
    std::vector<int> twoSum_unordered_map(std::vector<int> &nums, int target);
};

#endif // SOLUTION_H
