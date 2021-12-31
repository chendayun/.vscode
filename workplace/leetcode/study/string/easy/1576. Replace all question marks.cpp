#include <iostream>

using namespace std;

string modifyString(string s)
{

    if (s.size() == 1)
    {
        if (s[0] == '?')
        {
            return "a";
        }
    }
    if (s[0] == '?')
    {
        for (int i = 0; i < 26; i++)
        {
            s[0] = 'a' + i;
            if (s[0] != s[1])
                break;
        }
    }
    s += ' ';
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == '?')
        {
            for (int i = 0; i < 26; i++)
            {
                s[i] = 'a' + i;
                if (s[i] != s[i - 1] && s[i] != s[i - 1])
                    break;
            }
        }
    }
    return s.erase(s.size() - 1);
}

int main()
{

    return 0;
}
