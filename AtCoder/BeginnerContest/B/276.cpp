#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <numeric>
#include <cmath>
#include <map>
#define ll long long
#define endl '\n'
using namespace std;
// category : 

int main() {
    ios_base::sync_with_stdio(false);
    
    int n,m; cin>>n>>m;
    set<int> s={};
    vector<set<int>> city(n+1,s);

    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        city[a].insert(b);
        city[b].insert(a);
    }

    for(int i=1;i<=n;i++){
        cout<<city[i].size();
        for(int j:city[i]){
            cout<<' '<<j;
        }
        cout<<endl;
    }

	return 0;
}