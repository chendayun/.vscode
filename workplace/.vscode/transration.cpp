#include<bits/stdc++.h>
using namespace std;
#define MAXV 1000
int A[MAXV][MAXV];
int n,m,k;
int sno,eno;
int visited[MAXV];
struct NodeType{
	int vno;
	int length;
};
int bfs(int sno,int eno){
	if(sno==eno) return 0;
	NodeType e,e1;
	queue<NodeType>qu;
	e.vno=sno;e.length=0;
	qu.push(e);
	visited[e.vno]=1;
	while(!qu.empty()){
		e=qu.front();qu.pop();
		if(e.vno==eno) return e.length-1;
		for(int j=0;j<n;j++){
			if(A[e.vno][j]!=0){
				if(visited[j]==0){
					e1.vno=j;
					e1.length=e.length+1;
					qu.push(e1);
					visited[j]=1;
				}
			}
		}
	}
}
int main(){
	while(scanf("%d%d",&n,&m)==2){
		int a,b;
		memset(A,0,sizeof(A));
		memset(visited,0,sizeof(visited));
		for(int i=0;i<n;i++){
			cin>>a>>b;
			A[a][b]=1;
			A[b][a]=1;
		}
		cin>>k;
		for(int i=0;i<k;i++){
			cin>>sno>>eno;
			cout<<bfs(sno,eno)<<endl;
		}
	}
}