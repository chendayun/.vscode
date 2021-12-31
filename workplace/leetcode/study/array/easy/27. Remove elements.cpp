#include <iostream>
#include <vector>
#include <string>
using namespace std;

int removeElement(vector<int> &nums, int val)
{

    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        while (left < right && nums[right] == val)
            right--;
        while (left < right && nums[left] != val)
            left++;
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left++;
        right--;
    }
    int i;
    for (i = 0; i < nums.size(); i++)
    {
        if (nums[i] == val)
            break;
    }
    return i;
}

int main()
{

    return 0;
}
