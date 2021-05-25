#include <bits/stdc++.h>
using namespace std;
int sepi(vector<int> &coins);
int main()
{

    vector<int> myvector;
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(3);
    coins.push_back(2);
    int sum = sepi(coins);
    printf("%d", sum);
    return 0;
}
int sepi(vector<int> & coins){
    int sum = 0;
    for (int i = 0; i < coins.size(); i++)
    {
        sum += (coins[i] + 1) / 2;
    }
    return sum;
}
