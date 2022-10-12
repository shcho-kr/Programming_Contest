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
	
    int t; cin>>t;
    
    for(int i=0;i<t;i++){
        double a, b; // y+b = n * (a+x), ans = x+y
        int n;

        cin>>a>>b;
        ll ans=a;
        n=int(floor(b/a)+1);

        if(0<n && n<a){
            for(int i=1;i<=n;i++){
                ll x, y;
                x= max((ll)(ceil(b/i)-a),0ll);
                y= (a+x)*i-b;
                ans= min(ans,x+y);
        }
        }
        else {
            for(ll x=0;x<a;x++){
                ll y;
                y= ceil(b/(a+x))*(a+x)-b;
                ans= min(ans,x+y);
            }
        }

        cout<<ans<<endl;
    }

	return 0;
}