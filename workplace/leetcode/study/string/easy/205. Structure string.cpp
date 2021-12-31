#include <iostream>
#include <map>
using namespace std;

bool isIsomorphic(string s, string t)
{
    map<char, char> s_map, t_map;
    for (int i = 0; i < s.size(); i++)
    {
        if (s_map.count(s[i]) == 0 && t_map.count(t[i]) == 0)
        {
            s_map[s[i]] = t[i];
            t_map[t[i]] = s[i];
            // cout << s_map[s[i]] << t_map[t[i]] << endl;
        }
        else if (s_map[s[i]] != t[i] || t_map[t[i]] != s[i])
        {

            return false;
        }
    }
    return true;
}

int main()
{
    string s = "egg", t = "add";
    bool result = isIsomorphic(s, t);

    cout << result << endl;

    return 0;
}