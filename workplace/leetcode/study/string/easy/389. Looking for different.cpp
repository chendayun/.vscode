#include <iostream>

using namespace std;

char findTheDifference(string s, string t)
{
    int s_map[128] = {0};
    int t_map[128] = {0};
    for (auto c : s)
    {
        s_map[c] += 1;
    }
    for (auto c : t)
    {
        t_map[c] += 1;
    }
    int i = 0;
    for (i = 'A'; i <= 'z'; i++)
    {
        if (t_map[i] - t_map[i] == 1)
        {
            break;
        }
    }
    return i;
}

int main()
{
    string s = "";
    // findTheDifference();
    return 0;
}
