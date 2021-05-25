#include <iostream>
using namespace std;

void Insert_Sort(int *nums, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = nums[i];
        int j;

        for (j = i - 1; j >= 0; j--)
        {
            if (nums[j] > temp)
            {
                nums[j + 1] = nums[j];
            }
            else
            {
                break;
            }
        }
        nums[j + 1] = temp;
    }
}

int main()
{
    int nums[] = {85, 92, 96, 70, 56, 47, 32, 25, 11};
    int n = sizeof(nums) / sizeof(int);
    Insert_Sort(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << endl;
    }
}