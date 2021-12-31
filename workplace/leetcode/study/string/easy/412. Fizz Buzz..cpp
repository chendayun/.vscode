#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fizzBuzz(int n)
{

    vector<string> result(n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0 && i % 3 == 0)
        {
            result[i] = "FizzBuzz";
        }
        else if (i % 5)
        {
            result[i] = "Buzz";
        }
        else if (i % 3)
        {
            result[i] = "Fizz";
        }
        else
        {
            result[i] = to_string(i);
        }
    }
    return result;
}
int main()
{

    return 0;
}
