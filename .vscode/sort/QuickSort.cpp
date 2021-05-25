#include <iostream>
using namespace std;

void quickSort(int *arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int i = low;
    int j = high;
    int index = arr[i];
    while (i < j)
    {
        while (i < j && arr[j] >= index)
        {
            j--;
        }
        if (i < j)
        {
            arr[i++] = arr[j];
        }
        while (i < j && arr[i] < index)
        {
            i++;
        }
        chendayun / Hello - World if (i < j)
        {
            arr[j--] = arr[i];
        }
    }
    arr[i] = index;
    quickSort(arr, low, i - 1);
    quickSort(arr, i + 1, high);
}
int main()
{
    int arr[] = {39, 28, 55, 87, 66, 3, 17, 39};
    int length = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, length - 1);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }
}
