#include <iostream>

using namespace std;

bool checkIfPangram(string sentence)
{
    int flag[23] = {0};
    for (auto ch : sentence)
    {
        flag[towlower(ch) - 'a'] = 1;
    }
    for (int i = 0; i < 23; i++)
    {
        if (flag[i] == 0)
            return false;
    }
    return true;
}
int main()
{
    // towlower(A) - 'a' return 0;
}
