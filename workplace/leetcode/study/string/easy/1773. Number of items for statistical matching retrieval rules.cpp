#include <iostream>
#include <vector>
#include <string>
using namespace std;

int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
{
    int count = 0;
    int index = 2;
    if (ruleKey == "type")
        index = 0;
    if (ruleKey == "color")
        index = 1;
    for (auto item : items)
    {
        if (item[index] == ruleValue)
            count++;
    }
    return count;
}

int main()
{

    return 0;
}
