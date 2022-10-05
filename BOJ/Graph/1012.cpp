#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

#define ll long long

using namespace std;

// link : https://www.acmicpc.net/problem/1012
// dfs or bfs

int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
int field[51][51], visited[51][51];
int t,m,n,k;
queue<pair<int,int>> q;

void bfs();

int main() {

    cin>>t;

    while(t--){
        int cnt=0;
        cin>>m>>n>>k;

        for(int x=0;x<m;x++){
            for(int y=0;y<n;y++){
                field[x][y]=0;
                visited[x][y]=0;
            }
        }
        while(k--){
            int x,y;
            cin>>x>>y;
            field[x][y]=1;
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(field[i][j]==1&&visited[i][j]==0){
                    q.push(make_pair(i,j));
                    bfs();
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }

	return 0;
}

void bfs(){
    visited[q.front().first][q.front().second] = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int k=0;k<4;k++){
            int nx=x+dx[k];
            int ny=y+dy[k];
            if(0<=nx && nx<m && 0<=ny && ny<n){
                if(visited[nx][ny]==0 && field[nx][ny]!=0){
                    q.push(make_pair(nx,ny));
                    visited[nx][ny]=1;
                }
            }
        }
    }
}