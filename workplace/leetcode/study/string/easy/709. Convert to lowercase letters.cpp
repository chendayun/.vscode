#include <iostream>

using namespace std;
string toLowerCase(string s)
{
    int n = 'a' - 'A';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] <= 'Z')
        {
            s[i] += n;
        }
    }
    return s;
}

int main()
{

    return 0;
}
