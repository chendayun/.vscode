#include <iostream>

using namespace std;

bool checkRecord(string s)
{

    int A = 0, L = 0, P = 0;
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'A':
            flag = 0;
            A++;
            break;
        case 'L':
            L++;
            flag++;
            break;
        case 'P':
            P++;
            flag = 0;
            break;
        default:
            break;
        }
    }
    if (A < 2 && flag < 3)
        return true;
    return false;
}

int main()
{

    return 0;
}
