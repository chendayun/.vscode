#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &nums, int l, int mid, int r)
{
    vector<int> temp;
    for (auto x : nums)
    {
        temp.push_back(x);
    }
    int i = l, j = mid + 1;
    int k = l;
    while (i <= mid && j <= r)
    {
        if (temp[i] <= temp[j])
        {
        }
    }
}
