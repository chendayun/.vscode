#include <iostream>
#include <cctype>
#include <string>

using namespace std;
string s[10] = {"zero", "one", "two", "there", "four", "five", "six", "seven", "eight", "nine"};
int main()
{
    char c;
    int sum = 0;
    while (isdigit(c = getchar()))
    {
        /* code */
        sum += c - '0';
    }
    string temp = to_string(sum);
    for (int i = 0; i < temp.size(); i++)
    {
        if (i > 0)
            cout << " ";
        cout << s[temp[i] - '0'];
    }
}