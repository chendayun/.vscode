#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets(vector<int>& nums) {
 vector<vector<int>> result;
        result.reserve(pow(2, nums.size()));
        result.push_back(vector<int>());
        for(int n: nums){
            int len = result.size();
            for(int i=0; i<len; i++){
                vector<int> subset = result[i];
                subset.push_back(n);
                result.push_back(::move(subset));
            }
        }
        return result;
    }
}
int main()
{
    int a[] = {1, 2, 3};
    vector<int> nums(a, a + 3);

    int sum = maxCoins(nums);
    printf("%d", sum);

    return 0;
}
