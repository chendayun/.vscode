#include<bits/stdc++.h>
using namespace std;

#define MAXN 20

int w[]={0,10,40,40};
int n=3;
int c1=50,c2=50;
int maxw=0;

int x[MAXN];

void dfs(int i,int tw,int rw,int op[]){
    if(i>n)
    {
        if(tw>maxw)
        {
            maxw=tw;
            for(int j=1;j<=n;j++)
            x[j]=op[j];

        }
    }
    else 
    {
        if(tw+w[i]<=c1){
            op[i]=1;
            dfs(i+1,tw+w[i],rw-w[i],op);
        }
        if(tw+rw-w[i]>maxw)
        {
            op[i]=0;
            dfs(i+1,tw,tw-w[i],op);
        }
    }
}
void dis(int n){
    for (int j = 1; j <=n; j++)
    if(x[j]==1)
        printf("\t将第%d个集装箱装上第一艘轮船上\n",j);
    else
          printf("\t将第%d个集装箱装上第二艘轮船上\n",j);
    
    
}
bool solve()
{
    int sum=0;
    for(int j=1;j<=n;j++)
    if(x[j]==0)
        sum+=w[j];
    
    if(sum<=c2)
        return true;
    else
        return false;
    
    
}

int main(){
    int op[MAXN];
    memset(op,0,sizeof(op));
    int rw=0;
    for(int i=1;i<=n;i++)
    rw+=w[i];

    dfs(1,0,rw,op);
    printf("求解结果\n");
    if(solve()){
        printf("最优方案 \n");
        dis(n);
    }
    else
    {
        printf("没有合适的装载方案\n");
    }
    
}