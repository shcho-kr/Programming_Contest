#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>
#define ll long long
using namespace std;

// link : https://yukicoder.me/problems/no/2093
// napsack problem, DP

int main() {
	
    int n,I,s[1001]={},a[1001]={};

    cin>>n>>I;
    for(int i=0;i<n;i++) scanf("%d %d",&s[i+1],&a[i+1]);

    int dp[n+1][I+1]={};

    for(int i=1;i<=n;i++){
        for(int j=1;j<=I;j++){
            if(j-s[i]<0){
                dp[i][j] = dp[i-1][j];
                continue;
            }
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-s[i]]+a[i]);
        }
    }

    cout<<dp[n][I];

	return 0;
}