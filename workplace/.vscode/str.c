#include <stdio.h>
#include <string.h>

int f(char *text)
{
    char str[1024] = {0};
    int i = 0, j;
    int flag = 0;
    char *p = text;
    while (*p)
    {
        for (j = 0; j <= i; j++)
            if (str[j] == *p)
            {
                flag = 1;
                break;
            }
        if (flag == 0)
        {
            str[i] = *p;
            i++;
        }
        flag = 0;
        p++;
    }
    strcpy(text, str);
    return 0;
}
int main()
{
    char text[1024] = {0};
    gets(text);
    f(text);
    puts(text);
}