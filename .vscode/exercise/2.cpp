#include<bits/stdc++.h>
using namespace std;
int main(){

queue<int> qu;
qu.push(1);
qu.push(2);
qu.push(3);
cout<<qu.front()<<endl;
  while(!qu.empty()){
      cout<<qu.front()<<endl;
      qu.pop();
  }
    return 0;
}