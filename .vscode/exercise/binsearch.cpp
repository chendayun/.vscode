#include<bits/stdc++.h>
using namespace std;

int BinSearch(int a[],int low,int hight,int k){
int mid;
    if(low<=hight){
        mid=(low+hight)/2;

        if(a[mid]==k)
        return mid;
        else if(a[mid]>k)
        return BinSearch(a,low,mid-1,k);

        else
        
         return BinSearch(a,mid+1,hight,k);
        
        
    }
    else
        return -1;
    
    
}
int main(){

    int n=10,i;
    int k=6;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    i=BinSearch(a,0,n-1,k);
    if(i>=0)
    printf("%d %d",i,k);
    return 0;
}