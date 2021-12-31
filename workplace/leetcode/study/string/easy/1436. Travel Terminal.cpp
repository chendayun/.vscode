#include <iostream>
#include <unordered_map>
using namespace std;

string destCity(vector<vector<string>> &paths)
{
    unordered_map<string, int> path_map;
    for (auto &path : paths)
    {
        path_map[path[0]] = 1;
    }
    for (auto &path : paths)
    {
        if (path_map[path[1]] == 0)
            return path[1];
    }
    return "";
}

int main()
{

    return 0;
}
