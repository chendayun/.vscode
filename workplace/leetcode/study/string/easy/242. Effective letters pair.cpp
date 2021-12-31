#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t)
{
    int s_array[128] = {0}, t_array[128] = {0};
    for (auto i : s)
    {
        s_array[i] += 1;
    }

    for (auto i : t)
    {
        t_array[i] += 1;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s_array[s[i]] != t_array[s[i]])
            return false;
    }
    return true;
}

int main()
{

    return 0;
}
