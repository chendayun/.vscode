#include <iostream>
#include <vector>
using namespace std;

class SubarraysDivByK
{
private:
    /* data */
public:
    int result{};
    int subarraysDivByK(vector<int> &nums, int k)
    {
        vector<int> temp;
        dfs(nums, temp, k, 0);
        return result;
    }
    void dfs(vector<int> &nums, vector<int> temp, int k, int level)
    {
        if (level == nums.size())
        {
            int sum = 0;
            for (auto i : temp)
            {
                sum += i;
            }
            result += sum % k == 0 ? 1 : 0;
            return;
        }
        dfs(nums, temp, k, level + 1);
        temp.push_back(nums[level]);
        dfs(nums, temp, k, level + 1);
    }
};

int main()
{
    // int array[]{4, 5, 0, -2, -3, 1};
    // int k = 5;
    // vector<int> nums;
    // nums.insert(nums.begin(), array, array + 6);
    // SubarraysDivByK s;
    // int res = s.subarraysDivByK(nums, k);
    // printf("%d", res);
}
