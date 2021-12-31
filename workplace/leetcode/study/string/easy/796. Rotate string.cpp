#include <iostream>

using namespace std;

bool rotateString(string s, string goal)
{
    if (s.size() != goal.size())
    {
        return false;
    }

    string double_s = s + s;
    return double_s.find(goal) != string::npos;
    // int i = 0, j = 0;
    // for (i = 0; i < s.size(); i++)
    // {
    //     if (s[0] == goal[i])
    //         break;
    // }
    // for (int j = 0; j < s.size(); j++)
    // {
    //     if (s[j] == goal[i % s.size()])
    //     {
    //         cout << j << " " << s[j] << " " << i % s.size() << " " << goal[i % s.size()] << endl;

    //         i++;
    //     }
    //     else
    //         return false;
    // }
    // return true;
}

int main()
{
    string s = "bbbacddceeb", goal = "ceebbbbacdd";
    cout << rotateString(s, goal) << endl;
    return 0;
}
