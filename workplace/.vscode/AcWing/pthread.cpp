#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> arr(10);
int main()
{
    //首先给array开辟了三个空间
    // for (int i = 0; i < 3; i++)
    // {
    //     array[i].resize(3); //给array中每个元素开辟了三个空间
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> array[i][j]; //直接对开辟的空间赋值即可
    //     }
    // }
    // for (int i = 0; i < array.size(); i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //         cout << array[i][j];
    //     cout << endl;
    // }
    cout << arr.size();
    return 0;
}