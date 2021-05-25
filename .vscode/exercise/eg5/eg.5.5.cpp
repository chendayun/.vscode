#include<bits/stdc++.h>
using namespace std;


void swap(int &x,int &y){
    int tmp=x;
    x=y; 
    y=tmp;

}

void dis(int a[],int n){
    printf("(");
    for(int i=0;i<n-1;i++)
        printf("%d",a[i]);

    printf("%d)",a[n-1]);    
}

void dfs(int a[],int n,int i)
{
    if(i>=n)
        dis(a,n);
    else
    {
        for(int j=i;j<n;j++)
        {
            swap(a[i],a[j]);
            dfs(a,n,i+1);
            swap(a[i],a[j]);
        }
    }
}
int main(){
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    printf("a的排列\n");
    dfs(a,n,0);
    printf("\n");

    return 0;
}