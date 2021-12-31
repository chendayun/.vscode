#include <iostream>
#include <string>
#include "stack"
#include "algorithm"
using namespace std;

string addBinary(string a, string b)
{

    if (a == "0" && b == "0")
        return "0";

    int result1 = 0, result2 = 0;
    for (auto str : a)
    {
        result1 *= 2;
        result1 += str - '0';
    }

    for (auto str : b)
    {
        result2 *= 2;
        result2 += str - '0';
    }
    result1 += result2;

    stack<char> bits_stack;
    while (result1 > 0)
    {
        bits_stack.push(result1 % 2 + '0');
        result1 /= 2;
    }
    string str = "";
    while (bits_stack.size() > 0)
    {
        str.push_back(bits_stack.top());
        bits_stack.pop();
    }
    return str;
}
string addBinary2(string a, string b)
{
    if (a == "0" && b == "0")
        return "0";
    if (a.size() > b.size())
    {
        string temp = a;
        a = b;
        b = temp;
    }
    int char_size = b.size() - a.size();

    for (int i = 0; i < char_size; i++)
    {
        a = '0' + a;
    }
    string result;
    stack<char> bit_stack;
    int c = 0, carry = 0;
    for (int i = b.size() - 1; i >= 0; i--)
    {
        c = (b[i] - '0' + a[i] - '0') + carry;
        carry = c / 2;
        // cout << carry << " ";
        // bit_stack.push(c % 2 + '0');
        result.push_back(c % 2 + '0');
    }

    if (carry == 1)
        result.push_back('1');

    // a = "";
    // while (bit_stack.size() > 0)
    // {
    //     a.push_back(bit_stack.top());
    //     bit_stack.pop();
    // }
    reverse(result.begin(), result.end());
    return result;
}
int main()
{

    string a = "11", b = "1";
    string result = addBinary2(a, b);
    cout << result << endl;
    return 0;
}
