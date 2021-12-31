#include <iostream>
#include <string >
using namespace std;

string licenseKeyFormatting(string s, int k)
{

    int count = 0;
    for (auto word : s)
    {
        if (word != '-')
            count++;
    }

    count = count % k;
    string result;
    int index, i = 0;
    for (index = 0; index < s.size(); index++)
    {
        if (i == count)
            break;
        if (s[index] != '-')
        {
            if (s[index] >= 'a')
            {
                result.push_back(s[index] - 32);
            }
            else
                result.push_back(s[index]);
            i++;
        }
    }

    if (index != 0)
        result.push_back('-');
    int flag = 0;
    for (int i = index; i < s.size(); i++)
    {

        if (flag == k)
        {
            result.push_back('-');
            flag = 0;
        }
        if (s[i] != '-')
        {

            if (s[i] >= 'a')
            {
                result.push_back(s[i] - 32);
            }
            else
                result.push_back(s[i]);

            flag++;
        }
    }
    if (result[result.size() - 1] == '-')
        result.erase(result.end() - 1);

    return result;
}

int main()
{

    string S = "2-5g-3-J";
    int K = 2;
    string result = licenseKeyFormatting(S, K);
    cout << result << endl;
    return 0;
}
