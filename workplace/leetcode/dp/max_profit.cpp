#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int profit = 0;
    int cost = INT_MAX;
    for (auto prices : prices)
    {
        cost = min(price, cost);
        profit = max(profit, price - cost);
    }
    return profit;
}
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int dp[][] = [n][2];
    dp[0][0] = 0;
    dp[0][1] = -prices;
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i] - 2);
        dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);
    }
    return dp[n - 1][0];
}