#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int array[13];
int first = -1;
int aw[5];

void empty()//清空函数
{
    for (int i = 4; i >= 0;--i)
    {
        aw[i] = 0;
    }
    first = -1;
}
void solve(int n ,string s1)
{
            for (int i = 0; i < (int)s1.size();++i)
        {
            array[i] = s1[i] - 'A' + 1; //将字符转成序号
        }
        sort(array, array + s1.size());
      
        do
        {
            if(array[4] > first)//剪枝，剪去排头第一个字符小于当前最优字符的所有情况
            {
                if(array[4] - pow(array[3] , 2) + pow(array[2] , 3) - pow(array[1] , 4) + pow(array[0] , 5) == n)//条件判断
                {
                    if(array[4] > first)
                    {
                        first = array[4];
                        for (int i = 4; i >= 0;--i)
                        {
                            aw[i] = array[i];
                        }                    
                            
                    }
                }
            }
           
        } while (next_permutation(array, array + s1.size()));//全排列
        if(first == -1)
        {
            cout << "no solution" << endl;
        }
        else
        {
            for (int i = 4; i >= 0;--i)
            {
                cout << (char)(aw[i]  + 'A' - 1);//还原字符并输出
            }
            cout << endl;
            empty();//清空，不影响下次结果。
        }
}
int main()
{
    string s1;
    int n = 0;

    while(cin >> n && n !=0)
    {
        cin >> s1;
        solve(n, s1);
    }
    return 0;
}