#include <bits/stdc++.h>
using namespace std;

#define MAX_NODE 101
#define MAX_N 10001
typedef struct MaskWork
{
    int lateTime;
    int mark;
    int index;
} MaskWork;

int cmp(MaskWork a, MaskWork b)
{
    return a.mark > b.mark;
}

int tempArry[MAX_N];
int main()
{
    int n;
    scanf("%d", &n);
    MaskWork node[MAX_NODE];
    set<int> pathV;
    set<int>::iterator it;
    memset(tempArry, 0, sizeof(tempArry));
    while (n > 0)
    {
        for (int i = 0; i < n; i++)
        {

            scanf("%d", &node[i].lateTime);
            node[i].index = i;
            pathV.insert(i);
        }
        for (int i = 0; i < n; i++)
            scanf("%d", &node[i].mark);
        sort(node, node + n, cmp);

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int tempTime = node[i].lateTime;
            while (tempTime)
            {
                if (tempArry[tempTime] == 0)
                {
                    tempArry[tempTime] = 1;
                    break;
                }
                else if (tempTime == 1)
                {
                    ans += node[i].mark;
                    pathV.erase(node[i].index);
                    tempTime--;
                }
                else
                    tempTime--;
            }
        }

        for (it = pathV.begin(); it != pathV.end(); ++it)
        {
            printf("%d ", (*it) + 1);
        }
        printf("\n");
        printf("%d\n", ans);
        scanf("%d", &n);
    }

    return 0;
}