#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p[3] = {NULL};
    int a[] = {1, 2323, 3434, 654};
    int b[] = {1090, 323, 6534, 6584};
    int c[] = {1, 232388, 9034, 6584};
    p[0] = a;
    p[1] = b;
    p[2] = c;
    printf("%d\n", *(p[0] + 3));
    printf("%d\n", *(p[1] + 1));

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}