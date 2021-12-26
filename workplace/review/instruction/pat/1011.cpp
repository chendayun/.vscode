#include <iostream>
using namespace std;

int main()
{
    for (int line = 0; line < 3; line++)
    {
        double a, b, c;
        double res = 1;
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            cout << "W ";
            res *= a;
        }
        else if (b > a && b > c)
        {
            cout << "T ";
            res *= b;
        }
        else
        {
            cout << "L ";
            res *= c;
        }
        cout << res;
    }
}
