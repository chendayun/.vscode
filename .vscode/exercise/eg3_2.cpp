#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m = 0, n = 0;
    ;
    scanf("%d%d", &m, &n);

    if (n < 1 || n > 1000)
        return 0;

    if (m < 1 || m > 50)
        return 0;

    list<int> first;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &temp);
        first.push_back(temp);
    }

    first.reverse();
    int sum = 0;
    list<int>::iterator it;
    for (int i = 0; i < m; i++)
    {
        /* code */
        it = first.begin();
        sum += *it;
    }
    printf("%d", sum);
}