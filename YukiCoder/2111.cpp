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
    
    int n; cin>>n;
    ll a[n+1],pow2[n+1]={1}, ans=0;

    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) pow2[i]=pow2[i-1]*2%998244353ll;

    for(int i=1;i<=n;i++){
        ans += a[i] * (pow2[n-i]-pow2[i-1]);
        ans %=998244353ll;
    }
    cout<<(ans+998244353ll)%998244353ll<<endl;

	return 0;
}