#include <iostream>
#include <string>
using namespace std;
int countSegments(string s)
{
    if (s.size() == 0)
        return 0;
    int count = 0;
    int flag = 0;
    for (auto c : s)
    {
        if (c == ' ')
            count++;
        else
            flag = 1;
    }
    count += 1;
    if (flag == 1)
    {

        for (int k = s.size() - 1; k >= 0; k--)
        {
            if (s[k] == ' ')
                count--;
            else
                break;
        }
        return count;
    }
    return 0;
}

int countSegments2(string s)

{
    s += ' ';
    int count = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != ' ' && s[i + 1] == ' ')
            count++;
    }
    return count;
}
int main()
{
    string s = "Hello, my name is John";
    cout << countSegments2(s) << endl;

    return 0;
}
