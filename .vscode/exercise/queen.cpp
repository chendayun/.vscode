#include<bits/stdc++.h>
using namespace std;
#define N 20
int a[N];
int c=0;
void dis(int n){
    printf("第%d个解",++c);
    for(int i=1;i<=n;i++)
        printf("(%d ,%d)",i,a[i]);
           cout<<endl;
}
bool place(int i,int j){
    if(i==1) return true;
    int k=1;
    while(k<i){ 
        if((a[k]==j)||(abs(a[k]-j)==abs(i-k)))
        return false;
        k++;
    }
    return true;
}
void queen(int i,int n){
    if(i>n)
    dis(n);

    else
    {
        for(int j=1;j<=n;j++){
            if(place(i,j)){
                a[i]=j;
                queen(i+1,n);
            }
        }
    }
    
           
        

}
int main(){
    int n;
    printf("皇后问题(n<20)n=");
    cin>>n;
    if(n>20)
    printf("n的值太大了,不能求解\n");
    else
    {
        printf("%d皇后求解问题如下：\n",n);
        queen(1,n);
    }
    
    
    return 0;
}