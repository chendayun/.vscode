#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

int main()
{
    // double xishu[1001] = {0};
    map<int, double> xishu;
    int k;
    cin >> k;
    while (k--)
    {
        int n;
        double d;
        cin >> n >> d;
        xishu[n] += d;
    }

    cin >> k;
    while (k--)
    {
        int n;
        double d;
        cin >> n >> d;
        xishu[n] += d;
        if (xishu[n] == 0)
            xishu.erase(n);
    }

    // int sum = 0;
    // for (int i = 0; i < 1000; i++)
    // {
    //     if (xishu[i] != 0)
    //         sum++;
    // }
    // //非零项系数的个数；
    // cout << sum;
    cout << xishu.size();
    for (auto it = xishu.end(); it != xishu.begin(); --it)
    {
        printf(" %d %.1f", it->first, it->second);
    }
}
