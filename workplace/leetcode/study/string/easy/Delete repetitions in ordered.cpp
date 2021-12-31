#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    auto it = nums.begin();

    while (it + 1 != nums.end())
    {
        auto itNext = it + 1;
        if (*it != *itNext)
        {
            it = itNext;
        }
        else
        {
            itNext = nums.erase(itNext);
        }

        if (nums.size() == 0)
            return 0;
    };
    return nums.size();
}

int removeDuplicates2(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    if (nums.size() == 1)
        return 1;
    int fast = 0;
    int slow = 1;
    while (slow < nums.size())
    {
        if (nums[fast] == nums[slow])
        {
            slow++;
        }
        else
        {
            nums[++fast] = nums[slow++];
        }
    }
    return fast + 1;
}

int main()
{

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    removeDuplicates2(nums);
    for (auto i : nums)
        cout << i << " " << endl;

    return 0;
}
/**
 * @brief
 *
 */