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
#define endl '\n'
using namespace std;
// category : 

int main() {
    ios_base::sync_with_stdio(false);
    
    ll a,b,c,d,e,f; cin>>a>>b>>c>>d>>e>>f;
    a%=998244353ll;
    b%=998244353ll;
    c%=998244353ll;
    d%=998244353ll;
    e%=998244353ll;
    f%=998244353ll;

    cout<<(a*b%998244353ll*c%998244353ll-d*e%998244353ll*f%998244353ll+998244353ll)%998244353ll<<endl;

	return 0;
}