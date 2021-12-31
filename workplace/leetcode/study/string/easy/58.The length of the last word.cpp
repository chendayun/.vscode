#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string str)
{
    int count = 0;
    int j = 0;
    for (auto c : str)
    {
        if (c == ' ')
        {
            if (count > 0)
                j = count;
            count = 0;
        }

        else
            count++;
    }
    return count >= j ? count : j;
}

int lengthOfLastWord2(string s)
{
    int count = 0;
    for (auto it = s.rbegin(); it != s.rend(); it++)
    {

        if (*it == ' ')
        {
            if (count > 0)
                break;
            count = 0;
        }

        else
            count++;
    }
    return count;
}

int main(int argc, char **arg)
{
    string str = "Hello World";
    cout << lengthOfLastWord(str);
}
/*
 * @brief
 * 这
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * /