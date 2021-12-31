#include <iostream>

using namespace std;

void reverseString(vector<char> &s)
{
    int head = 0, tail = s.size() - 1;
    char temp;
    while (head < tail)
    {
        temp = s[head];
        s[head] = s[tail];
        s[tail] = temp;
    }
}

int main()
{

    return 0;
}
