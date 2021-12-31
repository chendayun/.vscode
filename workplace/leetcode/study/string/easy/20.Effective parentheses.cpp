#include "iostream"
#include "string"
#include "stack"
using namespace std;

bool isValid(string s)
{
    stack<char> str_stack;
    for (auto i : s)
    {

        if (i == '(')
            str_stack.push(')');

        else if (i == '[')
            str_stack.push(']');
        else if (i == '{')
            str_stack.push('}');
        else if (str_stack.empty() || i != str_stack.top())
            return false;
        else
            str_stack.pop();
    }
    if (str_stack.empty())
        return true;
    else
        return false;
}
int main(int argc, char **arg)
{
    cout << isValid("[{]{}");
}
/**
 * @brief
 * 本题思路是所有的
 * 无
 *
 *
 */
