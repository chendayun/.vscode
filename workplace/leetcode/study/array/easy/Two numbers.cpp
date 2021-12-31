#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    int flag = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(i);
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    return ans;
}

// vector<int> twoSum2(vector<int> &nums, int target)
// {
//     unordered_map<int, int> nums_map;
//     for (auto num : nums)
//     {

//     }
// }
int main()
{

    return 0;
}
