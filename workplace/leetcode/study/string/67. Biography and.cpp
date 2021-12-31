#include <iostream>
#include <string>
#include "stack"
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
string addBinary(string a, string b)
{
}
int main()
{

    string a = "0", b = "0";
    string result = addBinary(a, b);
    cout << result << endl;
    return 0;
}
