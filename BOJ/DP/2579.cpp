#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>
#define ll long long
using namespace std;

// link : https://www.acmicpc.net/problem/2579
// DP

int main() {
	
    int n, str[301], dp[2][301]; // dp[0/1:pattern is xo/xoo][stair number]
    
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&str[i]);
    }

    dp[0][0]=str[0];
    dp[1][0]=str[0];

    dp[0][1]=str[1];
    dp[1][1]=str[0]+str[1];

    for(int i=2;i<n;i++){
        dp[0][i]= max(dp[0][i-2],dp[1][i-2])+str[i];
        dp[1][i]= dp[0][i-1]+str[i];
    }

    cout<<max(dp[0][n-1],dp[1][n-1])<<endl;

	return 0;
}