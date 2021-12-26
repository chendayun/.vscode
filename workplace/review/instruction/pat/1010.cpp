#include <iostream>
#include <limits.h>
using namespace std;

long long trans(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    else
        return c - 'a' + 10;
}
long long translate(string N, long long r)
{
    long long sum = 0;
    for (long long i = N.size() - 1, unit = 1; i >= 0; i--, unit *= r)
    {
        long long j = trans(N[i]);
        sum += j * unit;
    }
    return sum;
}
int translate2(string N, long long r, long long value) // return -1 0 1
{
    long long sum = 0;
    for (long long i = N.size() - 1, unit = 1; i >= 0; i--, unit *= r) // unit太大
    {
        if (unit > value)
            return 0;
        long long j = trans(N[i]);
        sum += j * unit;
    }
    if (sum > value)
        return 1;
    else if (sum == value)
        return 0;
    else
        return -1;
}
int main()
{
    string N1, N2;
    long long tag, r1, r2;
    cin >> N1 >> N2 >> tag >> r1;
    if (tag == 2)
    {
        auto a = N1;
        N2 = N1;
        N2 = a;
    }
    long long value = translate(N1, r1);
    long long max_digit = 0;
    for (char c : N2)
    {
        long long j = trans(c);
        if (j > max_digit)
            max_digit = j;
    }

    long long low, high;

    // high为int 最大值
    // int不能满足了；

    //结果可能是只有一个数字；
    if (translate(N2, max_digit + 1) == value)
    {

        cout << max_digit + 1;
        return 0;
    }
    for (low = max_digit + 1, high = INT_MAX; low <= high;)
    {
        long long mid = (low + high) / 2;
        // long long temp = translate(N2, mid);
        int temp = translate2(N2, r2, value);

        if (temp == 0)
        {
            cout << mid;
            return 0;
        }
        if (temp < 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << "Impossible";
    return 0;

    // for (r2 = max_digit + 1; translate(N2, r2) < value; r2++)
    //         //这样卡着了
    //     ;

    // if (translate(N2, r2) == value)
    // {
    //     cout << r2;
    //     return 0;
    // }
    // cout << "Impossible";
    // return 0;
}