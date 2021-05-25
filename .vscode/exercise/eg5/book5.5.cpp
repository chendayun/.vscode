#include<bits/stdc++.h>
using namespace std;

#define MAXN 20

int q[MAXN];
int c=0;
void dis(int n){
    printf("%d",++c);
    for(int i=1;i<=n;i++)
        printf("(%d %d)",i,q[i]);
    printf("\n");
}
bool place(int i)
{
    int j=1;
    if(i==1)
        return true;
   
    while(j<i)
    {
        if(abs(q[j]==q[i])||abs(j-i))
            return false;
            j++;
    }
    return true;
}
void Queens(int n){
    int i=1;
    q[i]=0;
    while (i>=1)
    {
        q[i]++;
        while (q[i]<=n && !place(i))
            q[i]++;
        
        if(q[i]<=n)
        {
            if(i==n)
        dis(n);
            else
            {
                i++;
                q[i]=0;
            }
            
        }
        else
          i--;   
    }
    
}
int main(){

    int n=6;
   // cin>>n;
    Queens(n);
    return 0;
}
