#include <iostream>
#include "solution.h"

using namespace std;

Solution::Solution()
{

}

int Solution::lengthOfLongestSubstring(string str)
{
    for (int index = 0, auto it = str.begin(); it < str.end(); ++it, ++index){
        cout << *it;
    }

    cout<<"\n";
    return int(str.length());
}
