#include <iostream>

using namespace std;
bool validPalindrome(string s)
{
    int left = 0, right = s.size() - 1;
    bool flag = true;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            flag = false;
            break;
        }
        left++;
        right--;
    }

    cout << left << " " << right << endl;
    if (flag)
    {
        return true;
    }

    else
    {
        if (s.size() % 2 == 0)
        {
            if (right == (s.size() / 2) && right == left + 1)
            {
                return true;
            }
            else
                return false;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    string str = "abca";
    cout << validPalindrome(str);

    return 0;
}
