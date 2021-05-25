#include<bits/stdc++.h>
using namespace std;

#define MAXN 200

void dis(vector< int>&myv){
    for(int j=0;j<5;j++)
    cout<<myv[j];
}
bool ok(int get[],int k)
{
for(int i=0;i<k;i++)if(get[i]>=get[k])return false;
return true;
}
void print(int a[],int len)
{
for(int i=0;i<len;i++)
cout<<a[i]<<" ";
cout<<endl;
}
void dfs(int i,int n,int tatal,int num[],vector< int>&myv){
  int sum=0;
//回溯法从n个数字里面选取m个出来
sort(num,num+tatal);
int a[5];

for(int i=0;i<5;i++)a[i]=-1;
int k=0;

int c[5];
for(int i=0;i<5;i++)
c[i]=0;
while(k>=0)
{
while(c[k]<n)
{
a[k]=num[c[k]++];
if(ok(a,k)&&k==5-1)//得到一个完整组合 
{
print(a,5);sum++;
}
else if(ok(a,k)&&k<5-1)k++;//得到部分解，继续往下走 
}
a[k]==-1;
c[k]=0;
k--;
} 
cout<<"共有"<<sum<<"个组合"<<endl;

  
}


int main(){
    int n,num[MAXN];
    vector<int> a;
     while (1)
      {
         cin>>n;
        //  if(n==0)
        //       break;
        string str;
        cin>>str;
        for (int  i = 0; i < str.length(); i++)
        {
            num[i]=(int)(str[i]-'A')+1;
        }
       // printf("%d",str.length());
          dfs(0,n,str.length(), num,a);
    }
    
    

}