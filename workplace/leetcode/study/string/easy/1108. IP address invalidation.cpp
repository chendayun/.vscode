#include <iostream>

using namespace std;

string defangIPaddr(string address)
{
    string result = "";
    for (auto c : address)
    {
        if (c == '.')
        {
            result.push_back('[');
            result.push_back('.');
            result.push_back(']');
        }
        else
            result.push_back(c);
    }
    return result;
}
int main()
{

    return 0;
}
