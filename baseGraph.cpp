#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>

#define ll long long

using namespace std;

// DFS, BFS with adjacent(linked) list : O(V+E)
// with adjacent matrix : O(V^2)

class Graph{
    public:
    int N; // nodes
    vector<vector<int>> adj; // adjacent list
    vector<bool> visited;

    Graph(): N(0){}
    Graph(int n): N(n){
        adj.resize(N);
        visited.resize(N);
    }

    void addEdge(int u, int v){ // link between u and v
        adj[u].push_back(v);
        adj[v].push_back(u); // add both side edges. doubly-linked list.
    }

    void sortList(){
        for(int i=0;i<N;i++){
            sort(adj[i].begin(),adj[i].end());
        }
    }

    void dfs(){
        fill(visited.begin(), visited.end(), false);
        dfs(0);
    }

    int dfsAll(){
        int components = 0;
        fill(visited.begin(), visited.end(), false);
        for(int i=0;i<N;i++){
            if(!visited[i]){
            cout<<"new DFS starts"<<endl;
            int nodes = dfs(i);
            components++;
            cout<<"size : "<<nodes<<endl;
            }
        }
        return components;
    }

    void bfs(){
        fill(visited.begin(), visited.end(), false);
        queue<int> Q;
        Q.push(0);
        visited[0]=true;

        int level = 0;
        while(!Q.empty()){
            int qSize = Q.size();
            cout<<"level : " << level << endl;
            for(int i=0;i<qSize;i++){
            int curr = Q.front();
            Q.pop();
            cout<<"node : " << curr << " visited" << endl;
            for(int next: adj[curr]){
                if(!visited[next]){
                    visited[next] = true;
                    Q.push(next);
                }
            }
            }
            level++;
        }
    }

    private:
    int dfs(int curr){
        int nodes = 1;
        visited[curr] = true;
        cout << "node " << curr << " visited" << endl;
        for(int next: adj[curr]){
            if(!visited[next]) nodes += dfs(next);
        }
        return nodes;
    }
};

int main() {

    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,5);
    g.addEdge(2,5);
    g.addEdge(3,4);
    g.sortList();
    g.dfs();

    int components = g.dfsAll();
    cout<<"components : "<<components<<endl<<endl;

    cout<<"bfs Start"<<endl;
    g.bfs();

    pair<int,int> p=make_pair(1,2);
    cout<<"first element : "<<p.first<<endl;
    cout<<"second element : "<<p.second<<endl;

    /*
    // 四方向への移動ベクトル
    const int dx[4] = {1, 0, -1, 0};
    const int dy[4] = {0, 1, 0, -1};


    void dfs(int h, int w) {
        seen[h][w] = true;

        // 四方向を探索
        for (int dir = 0; dir < 4; ++dir) {
            int nh = h + dx[dir];
            int nw = w + dy[dir];

            // 場外アウトしたり、移動先が壁の場合はスルー
            if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
            if (field[nh][nw] == '#') continue;

            // 移動先が探索済みの場合
            if (seen[nh][nw]) continue;

            // 再帰的に探索
            dfs(nh, nw);
        }
    }
    */

	return 0;
}