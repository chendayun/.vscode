#include <iostream>
#include <vector>
#include <string>
using namespace std;

int isSimpleLine(char c)
{
    int line = 0;
    switch (c)
    {
    case 'q':
        line = 1;
        break;
    case 'w':
        line = 1;
        break;
    case 'e':
        line = 1;
        break;
    case 'r':
        line = 1;
        break;
    case 't':
        line = 1;
        break;
    case 'y':
        line = 1;
        break;
    case 'u':
        line = 1;
        break;
    case 'i':
        line = 1;
        break;
    case 'o':
        line = 1;
        break;
    case 'p':
        line = 1;
        break;

    case 'z':
        line = -1;
        break;
    case 'x':
        line = -1;
        break;
    case 'c':
        line = -1;
        break;
    case 'v':
        line = -1;
        break;
    case 'b':
        line = -1;
        break;
    case 'n':
        line = -1;
        break;
    case 'm':
        line = -1;
        break;
    default:
        break;
    }
    return line;
}
vector<string> findWords(vector<string> &words)
{
    vector<string> result;
    for (auto word : words)
    {
        if (word.size() == 1)
            result.push_back(word);
        else
        {
            int flag = 1;
            for (int i = 0; i < word.size() - 1; i++)
            {

                if (isSimpleLine(tolower(word[i])) != isSimpleLine(tolower(word[i])))
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                result.push_back(word);
        }
    }
    return result;
}

int main()
{
    vector<string> words = {"omk"};
    vector<string> result;
    result = findWords(words);
    for (auto word : result)
    {
        cout << word << endl;
    }
    return 0;
}
