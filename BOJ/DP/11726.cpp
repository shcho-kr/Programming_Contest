#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// https://www.acmicpc.net/problem/11726

int main() {
	
    int n; cin>>n;
    int dp[1001]={0,1,2};

    for(int i=3;i<=n;i++){
        dp[i]=(dp[i-1]+dp[i-2])%10007;
    }

    cout<<dp[n];

	return 0;
}