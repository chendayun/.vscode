#include <iostream>
#include <vector>
using namespace std;
int N, M, C1, C2;
int num_of_team[500], dis[500][500], mindis[500], paths, teams;
vector<int> v[500];

void dfs(int curcity, int curlen, int curtem)
{
    if (curlen > mindis[curcity])
        return;
    //到目的地
    if (curcity == C2)
    {
        if (curlen == mindis[curcity])
        {
            //
            paths++;
            if (curtem > teams)
                teams = curtem;
        }
        else
        {
            mindis[C2] = curlen;
            paths = 1;
            teams = curtem;
        }
    }
    else
    {
        if (curlen < mindis[curcity])
            mindis[curcity] = curlen;
        for (int i = 0; i < v[curcity].size(); i++)
        {
            int j = v[curcity][i];
            dfs(j, curlen + dis[curcity][j], curtem + num_of_team[curcity]);
        }
    }
}
int main()
{
    cin >> N >> M >> C1 >> C2;
    for (int i = 0; i < N; i++)
    {
        /* code */
        cin >> num_of_team[i];
    }

    int j, k, l;
    for (int i = 0; i < N; i++)
    {
        cin >> j >> k >> l;
        //邻居节点
        v[j].emplace_back(k);
        v[k].emplace_back(j);
        dis[j][k] = dis[k][j] = l;
        for (int i = 0; i < N; i++)
        {
            mindis[i] = __INT_MAX__;
        }
        dfs(C1, 0, num_of_team[C1]);
    }
}