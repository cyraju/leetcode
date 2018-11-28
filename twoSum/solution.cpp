#include "solution.h"

#include <map>
#include <unordered_map>
#include <iostream>
/*Brute force approach O(n^2)*/
std::vector<int> Solution::twoSum(std::vector<int> &nums, int target)
{
    for(std::vector<int>::size_type i = 0; i != nums.size(); i++) {
        for(std::vector<int>::size_type j = i+1; j!= nums.size(); j++) {
            if(nums[i] + nums[j] == target)
                return {int(i), int(j)};
        }
    }
    return {-1, -1};
}

/*Ordered Map - This is internallu implemented as a Self Balancing Binary Search Tree
Adv - uses less memory
Dis - O(nlogn) for best and worst caseBrute force approach

Use this only if hash function in unordered map is really bad*/

std::vector<int> Solution::twoSum_ordered_map(std::vector<int> &nums, int target)
{
    //this map with have value, index of the incoming nums vector
    std::map<int , int> vectorMap;
    for(std::vector<int>::size_type i = 0; i != nums.size(); i++) {
        auto it = vectorMap.find(target - nums[i]);
        if( it != vectorMap.end()) {
            // we found a complement. return it
            return {int(i) , it->second};
        } else {
            vectorMap.insert(std::pair<int,int>(nums[i], i));
            //if key already exists, no need to insert it. hence ignoring failed to insert case
        }
    }
    return {-1, -1};
}

/*unOrdered Map - This is internally implemented as a Hashtable
Adv - O(1) for best and O(n) for worst case
Dis :- more memory
Use this only if hash function in unordered map is really bad*/

std::vector<int> Solution::twoSum_unordered_map(std::vector<int> &nums, int target)
{
    //this map with have value, index of the incoming nums vector
    std::unordered_map <int , int> vectorMap;
    for(std::vector<int>::size_type i = 0; i != nums.size(); i++) {
        auto it = vectorMap.find(target - nums[i]);
        if( it != vectorMap.end()) {
            // we found a complement. return it
            return {int(i) , it->second};
        } else {
            vectorMap.insert(std::pair<int,int>(nums[i], i));
            //if key already exists, no need to insert it. hence ignoring failed to insert case
        }
    }
    return {-1, -1};
}



/*Brute force approach O(n^2)*/
