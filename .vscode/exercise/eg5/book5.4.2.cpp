#include<bits/stdc++.h>
using namespace std;

#define MAXN 20

int n=4,W;
int w[]={0,11,13,24,7};
bool dfs(int i,int tw,int rw){
    if(i>n)
    {
        if(tw=W)
        return true;
    }
    else
    {
        if(tw+w[i]<=W)
            return dfs(i+1,tw+w[i],rw-w[i]);
        if(tw+rw-w[i]>=W)
            return dfs(i+1,tw,rw-w[i]);    
    }

    return false;
    
}

bool solve(){
    int rw=0;
    for(int j=1;j<=n;j++)
        rw+=w[j];
        return dfs(1,0,rw);
}

int main(){
    W=7;
    printf("W=%d,%s\n",W,(solve()?"y":"n"));

    W=16;
    printf("W=%d,%s\n",W,(solve()?"y":"n"));
    
    W=21;
    printf("W=%d,%s\n",W,(solve()?"y":"n"));

    W=24;
    printf("W=%d,%s\n",W,(solve()?"y":"n"));
    return 0;
}