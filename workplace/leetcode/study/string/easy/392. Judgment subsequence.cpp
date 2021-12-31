#include <iostream>

using namespace std;

bool isSubsequence(string s, string t)
{
    int i = 0, j = 0;

    while (true)
    {

        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
            j++;
        if (i >= s.size() || j >= t.size())
        {
            break;
        }
    }
    if (i < s.size())
        return false;
    return true;
}

int main()
{

    return 0;
}
