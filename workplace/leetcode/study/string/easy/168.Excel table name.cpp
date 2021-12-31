#include <iostream>
#include <stack>
#include <string >
using namespace std;

string convertToTitle(int columnNumber)
{
    stack<char> word;
    string result = "";
    while (columnNumber > 0)
    {
        columnNumber--;
        int num = columnNumber % 26;
        word.push(65 + num);
        columnNumber = columnNumber / 26;
    }
    while (word.size() > 0)
    {
        result.push_back(word.top());
        word.pop();
    }
    return result;
}

int main()
{

    int columnNumber = 28;
    string result = convertToTitle(columnNumber);
    cout << result << endl;

    return 0;
}

/**
 * @brief
 * A的ascii 码
 *
 * 进制转换的变种，注意0；
 *
 */