#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    if (n < 1 || n > 10e7)
        return 0;
    int x = 0;
    int temp;
    for (int i = 0; i < 2 * n + 1; i++)
    {
        scanf("%d", &temp);
        if (temp < 1 || temp > 10e9)
            return 0;
        x ^= temp;
    }

    printf("%d", x);

    return 0;
}