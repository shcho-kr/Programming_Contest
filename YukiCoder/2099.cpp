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
    
    ll t,x,a,y,b; cin>>t>>x>>a>>y>>b;
    ll n,m,l,ans=20000000ll*20000000ll;

    // min of x*n+y*m+l
    // when a*n-b*m+l = t

    if(t>0){
        // m=0 ~ (t-floor(t/a)*a) + floor(t/a)*x
        m=(t-floor(t/a)*a) + floor(t/a)*x;
        for(int i=0;i<=m;i++){
            n=floor((t+b*i)/a);
            l=t-a*n+b*i;
            ans=min(n*x+i*y+l,ans);
        }
    }
    else{
        // m=ceil(|t|/b) ~ ceil(|t|/b)+ floor((ceil(|t|/b)*b-|t|)/y)
        m=ceil(double(abs(t))/b)+ floor((ceil(double(abs(t))/b)*b-abs(t))/y);
        for(int i=ceil(double(abs(t))/b);i<=m;i++){
            n=floor((b*i-abs(t))/a);
            l=b*i-abs(t)-a*n;
            ans=min(n*x+i*y+l,ans);
        }

    }
    cout<<ans<<endl;

	return 0;
}