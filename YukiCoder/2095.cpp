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
	
    int n,m; cin>>n>>m;
    ll a[n][m]={}, dp[n][m]={};
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            if (i==0) dp[i][j]=a[i][j];
        }

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            dp[i][j]=min(dp[i-1][j]+a[i][j],*min_element(dp[i-1],dp[i-1]+m)+a[i-1][j]+a[i][j]);
        }
    }

    for(int j=0;j<m;j++){
        dp[0][j]=0;
    }

    cout<<*min_element(dp[n-1],dp[n-1]+m)<<endl;

	return 0;
}