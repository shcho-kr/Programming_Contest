#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <numeric>
#include <cmath>
#define ll long long
using namespace std;

// link : 
// category : 

int main() {
	
    int n,m;
    cin>>n;
    
    set<int> a;

    while(n--){
        int tmp; scanf("%d",&tmp);
        a.insert(tmp);
    }

    cin>>m;
    while(m--){
        int tmp; scanf("%d",&tmp);
        if(a.find(tmp)!=a.end()) cout<<1<<"\n";
        else cout<<0<<"\n";
    }

	return 0;
}