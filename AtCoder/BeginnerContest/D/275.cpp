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

ll func(ll n, map<ll,ll> &m){
    if(m.find(n)!=m.end()) return m.find(n)->second;
    else{
        m.insert({n,func(ceil(n/2),m)+func(ceil(n/3),m)});
        return m.find(n)->second;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    
    map<ll,ll> m;
    m.insert({0ll,1ll});

    ll n; cin>>n;

    func(n,m);

    cout<<m.find(n)->second<<endl;

	return 0;
}