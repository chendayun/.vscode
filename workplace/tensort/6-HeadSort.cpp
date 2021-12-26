#include <iostream>

using namespace std;
void swap(int *ptr1, int *ptr2)
{
    if (ptr1 == NULL || ptr2 == NULL)
    {
        exit(-1);
    }

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void HeadAdjust(int array[], int parent, int length)
{
    int temp;
    temp = array[parent];
    int child = 2 * parent + 1;
    while (child < length)
    {
        /* code */
        if (child + 1 < length && array[child] < array[child + 1])
        {
            child++;
        }
        if (temp >= array[child])
            break;
        else
        {
            cout << "swap before: " << array[parent] << " " << array[child] << endl;
            swap(&array[parent], &array[child]);
            cout << "swap after: " << array[parent] << " " << array[child] << endl;
            parent = child;
            child = parent * 2 + 1;
        }
    }
}

void head_sort(int array[], int length)
{
    for (int i = (length - 1) / 2; i >= 0; i--)
    {
        HeadAdjust(array, i, length);
    }
    int end = length - 1;
    while (end > 0)
    {
        swap(&array[0], &array[end]);
        HeadAdjust(array, 0, end);
        --end;
    }
}

int main()
{
    int a[] = {4, 6, 8, 5, 9};
    int length = sizeof(a) / sizeof(int);
    head_sort(a, length);
    for (int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}