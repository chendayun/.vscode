#include <iostream>

using namespace std;

int longestPalindrome(string s)
{
    if (s.size() <= 1)
        return s.size();
    if (s.size() == 2)
    {
        if (s[0] == s[1])
            return 2;
        else
            return 1;
    }
    int s_map[128] = {0};

    for (auto c : s)
    {
        s_map[c] += 1;
    }
    int flag = 0;
    int sum = 0;
    for (int i = 'A'; i <= 'z'; i++)
    {
        if (s_map[i] % 2 == 0)
            sum += s_map[i];
        else
        {
            sum += s_map[i] - 1;
            flag = 1;
        }
    }
    if (flag == 1)
    {
        sum += 1;
    }
    return sum;
}

int main()
{

    return 0;
}
