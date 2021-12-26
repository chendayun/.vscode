#include <iostream>
using namespace std;

//最大子序列的和

int main()
{
    //从一到k
    int k, a[10001], sum[10001], result = -1, head, tail;
    int lowest = 0;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    sum[0] = 0;
    for (int i = 1; i <= k; i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }

    for (int end = 1; end <= k;)
    {
        if (sum[end] - sum[lowest] > result)
        {
            result = sum[end] - sum[lowest];
            head = a[lowest + 1];
            tail = a[end];
        }
        if (sum[lowest] > sum[end])
            lowest = end;
    }
    if (result < 0)
        cout << 0 << ' ' << a[1] << ' ' << a[k];
    else
    {
        cout << result << ' ' << head << ' ' << tail;
    }
}