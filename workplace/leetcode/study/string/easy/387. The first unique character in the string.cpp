#include <iostream>

using namespace std;

int firstUniqChar(string s)
{

    int recode[128] = {0};
    for (auto i : s)
    {
        recode[i] += 1;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (recode[s[i]] == 1)
            return i;
    }
    return -1;
}

int main()
{

    string s = "leetcode";
    cout << firstUniqChar(s) << endl;
    return 0;
}
