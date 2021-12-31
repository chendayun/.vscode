#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addStrings(string num1, string num2)
{
    if (num1.size() < num2.size())
    {
        string temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int num_size = num1.size() - num2.size();

    for (int i = 0; i < num_size; i++)
    {

        num2 = '0' + num2;
    }
    int carry = 0;
    int num = 0;

    string result = "";
    for (int i = num1.size() - 1; i >= 0; i--)
    {
        num = (num1[i] - '0' + num2[i] - '0') + carry;
        carry = num / 10;
        char c = (num % 10) + '0';
        result = result + c;
    }
    if (carry == 1)
        result = result + '1';
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string num1 = "9913", num2 = "0";
    string result = addStrings(num1, num2);

    cout << result << endl;
    return 0;
}
