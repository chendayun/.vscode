#include <iostream>

using namespace std;
int maxDepth(string s)
{

    int deep = 0, maxDeep = 0;

    for (auto ch : s)
    {
        if (ch == '(')
            deep++;
        if (ch == ')')
            deep--;
        maxDeep = deep > maxDeep ? deep : maxDeep;
    }
    return maxDeep;
}

int main()
{

    return 0;
}
