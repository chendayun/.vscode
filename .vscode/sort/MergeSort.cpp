
#include <iostream>
#include <vector>
using namespace std;

// void sort(int *arr)
// {
//     int lenth = sizeof(arr) / sizeof(arr[0]);
//     int *temp = new int[lenth];
//     sort(arr, 0, lenth - 1, temp);
//     delete temp;
// }

void merge(int *arr, int left, int mid, int right, int *temp)
{
    int i = left;
    int j = mid + 1;
    int t = 0;

    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            temp[t++] = arr[i++];
        }
        else
        {
            temp[t++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        temp[t++] = arr[i++];
    }
    while (j <= right)
    {
        temp[t++] = arr[j++];
    }

    t = 0;
    while (left <= right)
    {
        arr[left++] = temp[t++];
    }
}

void sort(int *arr, int left, int right, int *temp)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        sort(arr, left, mid, temp);
        sort(arr, mid + 1, right, temp);
        merge(arr, left, mid, right, temp);
    }
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 47878, 3, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    int *temp = new int[length];
    sort(arr, 0, length - 1, temp);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }
    delete temp;
}
