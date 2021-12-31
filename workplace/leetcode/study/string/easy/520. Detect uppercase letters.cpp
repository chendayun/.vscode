#include <iostream>

using namespace std;

bool detectCapitalUse(string word)
{
    if (word.size() <= 1)
        return true;
    if (word.size() == 2)
    {
        if (word[0] >= 'a' && word[1] <= 'Z')
            return false;
        else
            return true;
    }

    if (word[0] >= 'a' && word[1] <= 'Z')
        return false;

    for (int i = 1; i < word.size() - 1; i++)
    {
        if (word[i] <= 'Z' && word[i + 1] <= 'Z')
        {
        }
        else if (word[i] >= 'a' && word[i + 1] >= 'a')
        {
        }
        else
            return false;
    }
    return true;
}

int main()
{
    string word = "ggg";
    cout << detectCapitalUse(word) << endl;

    return 0;
}
