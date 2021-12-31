#include <iostream>

using namespace std;

int numJewelsInStones(string jewels, string stones)
{
    int stones_map[128] = {0};
    for (auto c : stones)
    {
        stones_map[c] += 1;
    }
    int sum = 0;

    for (auto j : jewels)
    {
        sum += stones_map[j];
    }
    return sum;
}
int main()
{

    return 0;
}
