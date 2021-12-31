#include <iostream>
#include <vector>
using namespace std;

int mostWordsFound(vector<string> &sentences)
{

    int count = 0, result = 0;
    for (auto sentence : sentences)
    {
        for (int i = 0; i < sentence.size(); i++)
        {
            if (sentence[i] == ' ')
                count++;
        }
        count++;
        result = result > count ? result : count;
        }
    return result;
}

int main()
{

    return 0;
}
