#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nums[] = {1, 2};
    nums[0] = nums[0] ^ nums[1];
    printf("%d\n", nums[0]);
    nums[1] = nums[0] ^ nums[1];
    printf("%d\n", nums[1]);
    nums[0] = nums[1] ^ nums[0];
    printf("%d\n", nums[0]);
    printf("%d\n", nums[1]);
}