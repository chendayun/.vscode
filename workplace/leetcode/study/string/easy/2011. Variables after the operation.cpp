#include <iostream>
#include <unordered_map>
using namespace std;
int finalValueAfterOperations(vector<string> &operations)
{
    int sum = 0;
    unordered_map<string, int> operations_map;
    for (auto o : operations)
    {
        operations_map[o] += 1;
    }
    sum += (operations_map["--X"] * -1);
    sum += (operations_map["X++"] * 1);
    sum += (operations_map["++X"] * 0);
    return sum;
}

int finalValueAfterOperations2(vector<string> &operations)
{
    int sum = 0;
    for (auto c : operations)
    {
        // switch (c)
        // {
        // case "X++":
        //     sum++;
        //     break
        // }
    }
    return 0;
}
int main()
{

    return 0;
}
