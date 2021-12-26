#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 12;
int n, p[N], len, ans = N;
vector<int> num[N];
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}
bool check(int x, int t)
{
    for (int i = 0; i < num[t].size(); i++)
    {
        if (gcd(x, num[t][i]) > 1)
            return false;
    }
    return true;
}
void dfs(int u)
{
    if (u == n)
    {
        ans = min(ans, len);
        return;
    }
    for (int i = 0; i < len; i++)
    {
        if (check(p[u], i))
        {
            num[i].push_back(p[u]);
            dfs(u + 1);
            num[i].pop_back();
        }
    }
    num[len++].push_back(p[u]);
    dfs(u + 1);
    num[--len].pop_back(); //这里一定要恢复状态
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i];
    dfs(0);
    cout << ans << endl;
    return 0;
}