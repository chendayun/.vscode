//上一层楼6s
//下一层4s
//停一层5s

// 12+5+6+5+8+5=41

#include <iostream>
using namespace std;

int main()
{
    int current = 0, N, time = 0;
    cin >> N;
    while (N--)
    {
        /* code */
        int towhere;
        cin >> towhere;
        if (current < towhere)
            time += 6 * (towhere - current) + 5;
        else if (current > towhere)
            time += 4 * (current - towhere) + 5;
        else
            time += 5;
        current = towhere;
    }
    cout << time;
}