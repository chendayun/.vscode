#include <iostream>
#include <string>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{

    int b[128] = {0};

    for (auto i : magazine)
    {
        b[i] += 1;
    }
    for (int i = 0; i < ransomNote.size(); i++)
    {
        if (b[ransomNote[i]] == 0)
            return false;
        else
        {
            b[ransomNote[i]] -= 1;
        }
    }
    return true;
}

int main()
{

    string ransomNote = "a", magazine = "b";
    bool result = canConstruct(ransomNote, magazine);
    cout << result << endl;
    return 0;
}
