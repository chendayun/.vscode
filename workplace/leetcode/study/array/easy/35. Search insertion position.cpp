#include <iostream>
#include <string>
#include <vector>

using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    if (target < nums[0])
        return 0;
    if (target > nums[nums.size() - 1])
        return nums.size();
    int left = 0, right = nums.size() - 1;

    int mid = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (target > nums[mid])
            left = mid + 1;
        if (target < nums[mid])
            right = mid - 1;
    }
    return left;
}
int main()
{

    return 0;
}
