#include <iostream>
#include <string>
using namespace std;
string interpret(string command)
{
    string result;
    for (int i = 0; i < command.length() - 1; i++)
    {
        if (command[i] == '(' && command[i + 1] == ')')
        {
            result.push_back('o');
            i++;
        }
        else if (command[i] == '(' && command[i + 1] != ')')
        {
            i++;
            while (i < command.size() - 1)
            {
                i++;
                if (command[i + 1] != ')')
                    result.push_back(command[i]);
                else
                    break;
                        }
            i++;
        }
        else
            result.push_back(command[i]);
    }
    if (command[command.size() - 1] != ')')
    {
        result.push_back(command[command.size() - 1]);
    }
    return result;
}

int main()
{

    return 0;
}
