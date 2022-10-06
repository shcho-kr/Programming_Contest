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

    void bfs(int n){
        fill(visited.begin(), visited.end(), false);
        queue<int> Q;
        Q.push(n);
        visited[n]=true;

        int level = 0;
        while(!Q.empty()){
            int qSize = Q.size();
            //cout<<"level : " << level << endl;
            for(int i=0;i<qSize;i++){
            int curr = Q.front();
            Q.pop();
            //cout<<"node : " << curr << " visited" << endl;
            cout << curr+1 << ' ';
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

    //private:
    int dfs(int curr){
        int nodes = 1;
        visited[curr] = true;
        //cout << "node " << curr << " visited" << endl;
        cout << curr+1 << ' ';
        for(int next: adj[curr]){
            if(!visited[next]) nodes += dfs(next);
        }
        return nodes;
    }
};

int main() {

    int n,m,v; cin>>n>>m>>v;

    Graph g(n);

    for(int i=0;i<m;i++){
        int l, r; cin>>l>>r;
        g.addEdge(l-1,r-1);
    }
    g.sortList();
    
    g.dfs(v-1);
    cout<<endl;
    g.bfs(v-1);

	return 0;
}