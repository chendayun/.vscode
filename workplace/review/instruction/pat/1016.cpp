#include <iostream>
#include <string>
#include <map> //排好序
#include <vector>
#include <cstdio>
#include <algorithm>
// #include <bitset> //了解一下
using namespace std;
struct record
{
    int dd, hh, mm, t;
    string tag;
};
map<string, vector<record>> M;
double danjia[24];
int N;

bool cmp(record x, record y)
{
    return x.t < y.t;
}
int main()
{
    int i, j, k;
    int month;
    for (i = 0; i < 24; i++)
    {
        cin >> danjia[i];
    }
    cin >> N;
    for (i = 0; i < N; i++)
    {
        string name, tag;
        char c;
        int date, hour, minute;
        cin >> name >> month >> c >> date >> c >> hour >> c >> minute >> tag;
        record temp;
        temp.dd = date;
        temp.hh = hour;
        temp.mm = minute;
        temp.t = date * 1440 + hour * 60 + minute;
        temp.tag = tag;
        M[name].emplace_back(temp);
    }

    for (auto it = M.begin(); it != M.end(); ++it)
    {
        auto V = it->second;
        sort(V.begin(), V.end(), cmp);
        double total = 0;
        for (i = 0; i < V.size(); i++)
        {
            /* code */
            if (i + 1 < V.size() && V[i].tag > V[i + 1].tag)
            {
                if (!total)
                {
                    cout << it->first;
                    printf(" %02d\n", month);
                }
                int t1 = V[i].t;
                int t2 = V[i + 1].t;
                double fenzhang = 0;
                for (int time = t1; time < t2; ++time)
                {
                    fenzhang += danjia[time % 1440 / 60]; // hour
                }
                printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n", V[i].dd, V[i].hh, V[i].mm, V[i + 1].dd, V[i + 1].hh, V[i + 1].mm, V[i + 1].t - V[i].t, fenzhang / 100);
                i += 2;
                total += fenzhang;
            }
            else
            {
                i++;
            }
        }
        if (total)
        {
            printf("Total amount: $%.2f\n", total / 100);
        }
    }
}