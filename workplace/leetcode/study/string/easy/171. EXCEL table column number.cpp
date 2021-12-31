#include <iostream>
#include "cmath"
#include "string"
using namespace std;

int titleToNumber(string columnTitle)
{

    int result = 0;
    for (auto word : columnTitle)
    {
        result *= 26;
        result += (word - 'A' + 1);
    }
    return result;
}

int main()
{
    string columnTitle = "FXSHRXW";

    cout << titleToNumber(columnTitle) << endl;
}
