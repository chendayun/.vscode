#include <iostream>

using namespace std;
bool isAlphabet(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'a'))
        return true;
    else
        return false;
}
string reverseOnlyLetters(string s)
{
    int left = 0;
    int right = s.size() - 1;
    char temp;
    while (left < right)
    {
        if (isAlphabet(s[left]) && isAlphabet(s[right]))
        {
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        if (!isAlphabet(s[left]))
            left++;
        if (!isAlphabet(s[right]))
            right--;
    }
    return s;
}

int main()
{

    return 0;
}
