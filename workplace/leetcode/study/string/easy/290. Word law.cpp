#include <iostream>
#include <unordered_map>
using namespace std;
bool wordPattern(string pattern, string s)
{
    unordered_map<char, string> p_map;
    unordered_map<string, char> s_map;

    string word;

    int j = 0, i = 0;
    for (i = 0; i < pattern.size(); i++)
    {
        while (s[j] != ' ' && j < s.size())
        {
            word = word + s[j];
            j++;
        }

        // cout << pattern[i] << " " << word << endl;
        if (p_map.count(pattern[i]) == 0 && s_map.count(word) == 0)

        {
            p_map[pattern[i]] = word;
            s_map[word] = pattern[i];
            cout << pattern[i] << " " << word << endl;
        }

        else
        {

            if (p_map[pattern[i]] == word && s_map[word] == pattern[i])
            {
            }
            else
                return false;
        }

        // cout << word << endl;
        if (j == s.size())
            break;
        j++;
        word = "";
    }

    cout << j << " " << s.size() << endl;
    if (j < s.size())
        return false;
    cout << i << " " << pattern.size() << endl;
    if (i < pattern.size() - 1)
        return false;
    return true;
}

int main()
{
    string pattern = "abba", str = "dog cat cat dog";
    cout << wordPattern(pattern, str) << endl;
    return 0;
}
