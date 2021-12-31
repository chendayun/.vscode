#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countConsistentStrings(string allowed, vector<string> &words)
{
    int allowed_map[128] = {0};
    int count = 0, flag = -1;
    for (auto c : allowed)
    {

        allowed_map[c] = 1;
    }
    for (auto str : words)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (allowed[str[i]] == 0)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        if (flag == 1)
            count++;
    }
    return count;
}

int main()
{

    return 0;
}
