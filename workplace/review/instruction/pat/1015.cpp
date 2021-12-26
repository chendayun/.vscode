#include <iostream>
using namespace std;

// 23 10111 11101 13

int is_prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int translate(string N, int r)
{
    int sum = 0;
    int unit;
    for (int i = N.size(), unit = 1; i >= 0; i--, unit *= r)
    {
        sum += unit * (N[i] + '0');
    }
    return sum;
}
int mian()
{
    int n, r;

    while (1)
    {

        cin >> n >> r;
        if (n < 0)
            break;
        if (!is_prime(n))
            cout << "No\n";

        else
        {
            string N = "";
            while (n != 0)
            {
                N += '0' + n % r;
                n /= r;
            }

            int value = translate(N, r);
            if (!is_prime(value))
                cout << "No\n";
            else
                cout << "Yes\n";
        }
    }
}