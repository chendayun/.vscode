#include <iostream>
using namespace std;

int main()
{
    int M;
    cin >> M;

    string earlist_signin = "999", latest_singout = "000";
    string earlist, latest;
    while (M--)
    {
        /* code */
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        if (s1 < earlist_signin)
        {
            earlist_signin = s2;
            earlist = s1;
        }

        if (s3 > latest_singout)
        {
            latest_singout = s3;
            latest = s1;
        }
        cout << earlist << ' ' << latest;
    }
}