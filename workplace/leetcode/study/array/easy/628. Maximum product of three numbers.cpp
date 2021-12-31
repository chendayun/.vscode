#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a < b;
}
int maximumProduct(vector<int> &nums)
{
    sort(nums.begin(), nums.end(), compare);

    int n = nums.size();
    return max(nums[0] * nums[1] * nums[2], nums[0] * nums[n - 1] * nums[n - 2]);
}
int main()
{

    return 0;
}
