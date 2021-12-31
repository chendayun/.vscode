#include <iostream>
#include <unordered_map>
using namespace std;
int isVowel(char word)

{
    int flag = 0;
    switch (word)
    {
    case 'A':
        flag = 1;
        break;
    case 'E':
        flag = 1;
        break;
    case 'I':
        flag = 1;
        break;
    case 'O':
        flag = 1;
        break;
    case 'U':
        flag = 1;
        break;
    case 'a':
        flag = 1;
        break;
    case 'e':
        flag = 1;
        break;
    case 'i':
        flag = 1;
        break;
    case 'o':
        flag = 1;
        break;
    case 'u':
        flag = 1;
        break;
    default:
        break;
    }
    return flag;
}
string reverseVowels(string s)
{
    unordered_map<char, int> voewl_map = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}, {'A', 1}, {'E', 1}, {'I', 1}, {'O', 1}, {'U', 1}};
    int left = 0, right = s.size() - 1;
    while (left < right)

    {
        if (voewl_map.count(s[left]) && voewl_map.count(s[right]))
        {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        else if (voewl_map.count(s[left]) && !voewl_map.count(s[right]))
        {
            right--;
        }
        else
            left++;
    }
    return s;
}

string reverseVowels2(string s)

{
    int left = 0, right = s.size() - 1;
    while (left < right)

    {
        if (isVowel(s[left]) && isVowel(s[right]))
        {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        else if (isVowel(s[left]) && !isVowel(s[right]))
        {
            right--;
        }
        else
            left++;
    }
    return s;
}

int main()
{

    return 0;
}
