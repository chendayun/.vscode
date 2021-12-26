#include <iostream>
#include <vector>
//数连通子图
using namespace std;

int N, M, K, lost, visit[1000];
vector<int> v[1000];

void dfs(int curcity)
{
    visit[curcity] = 1;
    for (auto i : v[curcity])
    {
        if (i != lost && visit[i])
        {
            dfs(i);
        }
    }
}
int main()
{
    int i, j, k, l;
    cin >> N >> M >> K;
    for (i = 0; i < M; i++)
    {
        scanf("%d %d", &j, &k);
        v[j].emplace_back(k);
        v[k].emplace_back(j);
    }

    while (K--)
    {
        /* code */
        cin >> lost;
        for (int i = 1; i <= N; i++)
            visit[i] = 0;
        j = 0;
        for (int i = 1; i <= N; i++)
        {
            if (!visit[i] && i != lost)
            {
                j++;
                dfs(i);
            }
        }
        cout << j - 1;
    }
}