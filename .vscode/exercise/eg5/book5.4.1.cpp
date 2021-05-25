#include<bits/stdc++.h>
using namespace std;

#define MAXN 20
 int n=4,W=31;
 int w[]={0,11,13,24,7};
 int count=0;
 void dis(int x[]){
     for(int j=1;j<5;j++)
     if(x[j])
        printf("%d ",w[j]);

    printf("\n");
 }
 void dfs(int i,int tw,int rw,int x[])
 {
     if(i>n)
     {
         if(tw==W){
             dis(x);
         }
     }
     else
     {
         if(tw+w[i]<=W)
         {
             x[i]=1;
             dfs(i+1,tw+w[i],rw-w[i],x);
         }
         if(tw+rw-w[i]>=W)
         {
             x[i]=0;
             dfs(i+1,tw,rw-w[i],x);
         }

     }
     
 }

 int main()
 {
     int x[MAXN];
     int rw=0;
     for(int j=1;j<=n;j++)
        rw+=w[j];
        dfs(1,0,rw,x);

     return 0;
 }