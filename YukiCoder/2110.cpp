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
    
    int t; ll a, b, c;
    cin>>t;

    while(t--){
        ll ans=0;
        cin>>a>>b>>c;

        ll AnCmin = min(a,c);
        a-=AnCmin; c-=AnCmin;
        ans+=AnCmin*2;

        ans+=b/2*2;
        b%=2;

        ll AnBmin = min(a,b);
        a-=AnBmin; b-=AnBmin;
        ans+=AnBmin;

        ans+=c/2;
        cout<<ans<<endl;
    }

	return 0;
}