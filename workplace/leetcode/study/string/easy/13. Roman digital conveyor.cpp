#include <iostream>
#include <map>
using namespace std;

int romanToInt(string str)
{
    map<char, int> romanMap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int prt = 0, next = 1;
    int str_size = str.size();
    int sum = 0;
    if (str_size == 1)
        return romanMap[str[0]];

    while (next < str_size)
    {
        if (romanMap[str[prt]] < romanMap[str[next]])
        {
            sum += -romanMap[str[prt]];
        }
        else
        {
            sum += romanMap[str[prt]];
        }
        prt++;
        next++;
    }

    sum += romanMap[str[prt]];
    return sum;
}

int main()
{

    string str = "MCMXCIV";
    int sum = romanToInt(str);
    cout << sum << endl;
    return 0;
}
