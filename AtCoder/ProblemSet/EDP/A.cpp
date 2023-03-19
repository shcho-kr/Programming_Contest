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
    int h[n],dp[n]; for(int i=0;i<n;i++) cin>>h[i];

    dp[0]=0; dp[1]=abs(h[0]-h[1]);

    for(int i=2;i<n;i++){
        dp[i]=min(dp[i-1]+abs(h[i-1]-h[i]),dp[i-2]+abs(h[i-2]-h[i]));
    }
    
    cout<<dp[n-1]<<endl;

	return 0;
}