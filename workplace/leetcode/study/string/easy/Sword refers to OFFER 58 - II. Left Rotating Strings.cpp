#include <iostream>

using namespace std;
string reverseLeftWords(string s, int n)
{
    int left = 0, right = n - 1;
    char temp;
    while (left < right)
    {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    left = n;
    right = s.size() - 1;
    while (left < right)
    {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    left = 0;
    right = s.size() - 1;
    while (left < right)
    {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    return s;
}
int main()
{

    return 0;
}
