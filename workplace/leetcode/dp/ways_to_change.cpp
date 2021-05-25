#include <bits/stdc++.h>
using namespace std;
#define BASE 1000000007;
int waysToChange(int n)
{
    int dp[n + 1] = {0};
    dp[0] = 1;
    int coins[4] = {1, 5, 10, 25};
    for (int j = 0; j < 4; j++)
    {
        /* code */
        int coin = coins[j];
        for (int i = coin; i <= n; i++)
        {
            /* code */
            dp[i] = (dp[i] + dp[i - coin]) % BASE;
        }
    }
    return dp[n];
}

int main()
{
    int res = waysToChange(5);
    printf("%d", res);

    return 0;
}
