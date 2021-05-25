#include <iostream>
using namespace std;
void Insert_Sort(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {

        if (a[i] < a[i - 1])
        {
            int temp = a[i];
            int j;
            for (j = i - 1; j >= 0; j--)
            {
                if (a[j] > temp)
                {
                    a[j + 1] = a[j];
                }
                else
                {
                    break;
                }
            }
            a[j + 1] = temp;
        }
    }
}

int main()
{
    int nums[] = {65, 27, 59, 64, 58, 72};
    int n = 6;
    Insert_Sort(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << endl;
    }
}
