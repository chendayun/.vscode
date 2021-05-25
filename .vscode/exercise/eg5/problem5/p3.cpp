#include<bits/stdc++.h>
using namespace std;

#define MAXN 200
int best[MAXN],x[MAXN],w[MAXN][MAXN];
int cost[MAXN][MAXN];
int n,m,c;
int minw=pow(2,31)-1;

void dis(){
    for(int i=0;i<n;i++)
    printf("tal=%d ",best[i]);
    printf("\n");
    printf("min=%d\n",minw);
}

void dfs(int i,int tw,int tc){
    if(i==n)
    {
        if(tw<minw)
        {minw=tw;
             for(int j=0;j<m;j++)
             best[j]=x[j];
        }
    }
    else
    {
       
        for(int j=0;j<m;j++)
        {
            if(tw+w[i][j]<minw && tc+cost[i][j]<=c)
            {
                x[i]=j+1; 
                tw+=w[i][j];
                tc+=cost[i][j];
                
                dfs(i+1,tw,tc);
                 tw-=w[i][j];
                tc-=cost[i][j];
                
            }
        }
    }
    
}

 int main()
 {
    int i,j;
    cin >> n >> m >> c;
    for( i=0;i<n;i++)
        for( j=0;j<m;j++)
        cin>>w[i][j];

           
    for( i=0;i<n;i++)
        for( j=0;j<m;j++)
        cin>>cost[i][j];   
   
    dfs(0,0,0);
    dis();
   return 0;

 }
