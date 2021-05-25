#include<bits/stdc++.h>
using namespace std;
#define MAXN 20
int n=4;
int W=6;
int w[]={0,5,3,2,1};
int v[]={0,4,4,3,1};
int x[MAXN];
int maxv=0;
void dfs(int i,int tw,int tv,int op[]){
    if(i>n)
    {
        if(tw==W &&tv>maxv)
        {
            maxv=tv;
            for (int j = 0; j <= n; i++)
            
                /* code */
                x[j]=op[j];
            
            
        }
    }
    else
     {
            op[i]=1;
            dfs(i+1,tw+w[i],tv+v[i],op);
            op[i]=0;
            dfs(i+1,tw,tv,op);
     }
        
    
}
void dis(){
    for(int i=1;i<MAXN;i++)
    printf("%d\n",x[i]);
}
int main(){
    int op[MAXN];
    dfs(1,0,0,op);
    dis();
    return 0;
}