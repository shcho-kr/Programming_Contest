#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define ll long long
#define endl '\n'
using namespace std;
// category :

int main() {
    ios_base::sync_with_stdio(false);

    ll n, W;
    cin >> n >> W;
    ll w[n + 1], v[n + 1];
    ll dp[n + 1][W + 1] = {};

    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            if (j - w[i] >= 0) dp[i][j] = max(dp[i - 1][j - w[i]] + v[i], dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
        }
    }

    cout<<dp[n][W];

    return 0;
}