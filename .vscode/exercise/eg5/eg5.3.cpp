#include<bits/stdc++.h>
using namespace std;

void dis(vector<int> path){
printf("{");
    for(int i=0;i<path.size();i++)
    printf("%d",path[i]);
printf("},");
}

void dfs(int a[],int n,int i,vector<int >path){
    if(i>=n)
    dis(path);
    else
    {
        dfs(a,n,i+1,path);
        path.push_back(a[i]);
        dfs(a,n,i+1,path);
    }
    
}


int main()
{
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> path;
    printf("求解结果:\n");
    dfs(a,n,0,path);
    printf("\n");
    return 0;
}