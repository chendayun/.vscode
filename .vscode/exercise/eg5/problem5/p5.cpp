#include<iostream>
#include<algorithm>
using namespace std;
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
int main()
{
int sum=0;int n,m;
//回溯法从n个数字里面选取m个出来

cin>>n;
int num[n];

for(int i=0;i<n;i++)cin>>num[i];
sort(num,num+n);

cin>>m;

int a[m];
for(int i=0;i<m;i++)a[i]=-1;
int k=0;int c[m];
for(int i=0;i<m;i++)c[i]=0;
while(k>=0)
{
while(c[k]<n)
{
a[k]=num[c[k]++];
if(ok(a,k)&&k==m-1)//得到一个完整组合 
{
print(a,m);sum++;
}
else if(ok(a,k)&&k<m-1)k++;//得到部分解，继续往下走 
}
a[k]==-1;
c[k]=0;
k--;
} 
cout<<"共有"<<sum<<"个组合"<<endl;

} 