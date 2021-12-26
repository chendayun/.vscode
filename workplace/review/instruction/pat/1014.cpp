#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

struct custtomer
{
    /* data */
    int process_time, leave_time = 0;
};
custtomer c[1001];
int N, M, K, Q; // N窗口， M每个窗口人数，K总人数，Q查询数
int main()
{
    int i, j, cursor = 1;
    cin >> N >> M >> K >> Q;

    queue<int> q[N];
    for (int i = 1; i <= K; i++)
    {
        /* code */
        cin >> c[i].process_time;
    }
    for (int time = 480; time < 1020; time++)
    {
        //送客
        for (i = 0; i < N; i++)
        {
            if (q[i].size())
            {
                j = q[i].front();
                if (c[j].leave_time == time)
                {
                    q[i].pop();
                }
            }
        }
        //入队
        for (j = 1; j <= M; j++)
        {
            for (i = 0; i < N; i++)
            {
                if (q[i].size() < j)
                {
                    if (cursor <= K)
                    {
                        q[i].push(cursor);
                        cursor++;
                    }
                }
            }
        }
        //迎客
        for (int i = 0; i < N; i++)
        {
            if (q[i].size())
            {
                j = q[i].front();
                if (c[j].leave_time == 0)
                {
                    c[j].leave_time = time + c[j].process_time;
                }
            }
        }
    }

    while (Q--)
    {
        cin >> i;
        if (c[i].leave_time == 0)
        {
            cout << "sorry\n";
        }
        else
        {
            printf("%02d:%02d", c[i].leave_time / 60, c[i].leave_time % 60);
        }
    }
}
