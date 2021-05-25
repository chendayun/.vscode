#include<iostream>
using namespace std;
#define MAX 100
//部件重量
int w[MAX][MAX];
//部件价值
int c[MAX][MAX];
//部件个数
int n;
//供应商个数
int m;
//最小的总价值
int d;
//零件供应商编号
int answers[MAX];
//最小的重量
int minW = INT_MAX;
//临时存放供应商编号
int X[MAX] ;
void input() 
{
	cin >> n >> m >> d;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m;j++)
		{
			cin >> w[i][j];
		}

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> c[i][j];
		}

	}
}
/*
@param i:第i个零件（从i=0开始）
@param currW:当前零件的总重量
@param currV:当前零件的总价值
*/
void getMinValue(int i,int currW,int currV)
{
	if (i == n)
	{
		//递归结束
		minW = currW;
			for (int  j = 0;j < n; j++)
			{
				answers[j] = X[j];
			}
	}
	else {
		for (int j = 0; j < n; j++)
		{
			//如果满足当前最小价值+当前零件的价值和不超过条件所给的价值并且当前零件总重量+当前零件重量之和比上一次总重量还小
			if (currV + c[i][j] <= d && currW+w[i][j] < minW)
			{
				//记录当前零件的编号
				X[i] = j + 1;
				//当前部件的总重量和价值均增加
				currW += w[i][j];
				currV += c[i][j];
				//开始回溯
				getMinValue(i+1,  currW,currV);
				//当前部件总重量和总价值都恢复到原来的样子
				currW -= w[i][j];
				currV -= c[i][j];
			}
		}
	
	}
}
int main() 
{
	input();
	getMinValue(0,0,0);
	for (int i = 0; i < n; i++)
	{
		if (i == n -1)
		{
			cout << answers[i] << endl;
		}
		else {
			cout << answers[i] << " ";
		}
		
	}
	cout << minW;
	
    
	return 0;
}

