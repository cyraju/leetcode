#include <iostream>
#include "solution.h"
using namespace std;

int main()
{
    Solution s;
    std::vector<int> vect = {3};
    std::vector<int> vect1 = {3, 5, 9, 10, 11, 12};
    std::vector<int> vect2 = {3, 3, 4, 5, 4};
    std::vector<int> vect3 = {3, 1};

    std::vector<int> v(s.twoSum_ordered_map(vect2, 6));
    for (auto value : v) {
        cout << value << " ";
    }
    cout <<"\n";
}
