#include <iostream>
#include <string>
#include <vector>
using namespace std;

string firstPalindrome(vector<string> &words)
{
    int flag = 1;
    for (int i = 0; i < words.size() - 1; i++)
    {
        int left = 0, right = words[i].size() - 1;
        while (left < right)
        {
            if (words[i][left] != words[i][right])
            {
                flag = 0;
                break;
            }
            left++;
            right--;
        }
        if (flag == 1)
            return words[i];
    }
    return "";
}
int main()
{
}
