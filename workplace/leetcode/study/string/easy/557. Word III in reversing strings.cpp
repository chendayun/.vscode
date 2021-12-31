#include <iostream>

using namespace std;

string reverseWords(string s)
{

    int left = 0;
    int right = 0;
    char temp;
    s.push_back(' ');
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != ' ' && s[i + 1] == ' ')
        {
            right = i;

            while (left < right)
            {
                temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left++;
                right--;
            }
            left = i + 2;
        }
    }
    s.erase(s.size() - 1);
    return s;
}
string reverseWords2(string s)
{
    int left = 0;
    int right = 0;
    char temp;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
        {
            right = i;

            while (left < right)
            {
                temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left++;
                right--;
            }
            left = i + 2;
        }
    }
    return s;
}

int main()
{

    return 0;
}
