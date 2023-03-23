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

    int n, k;
    cin >> n >> k;
    int h[100001], dp[100001];
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        dp[i]=2000000000;
    }
    // fill(dp, dp + n, 2000000000);
    dp[0]=0;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i - j < 0) continue;
            dp[i] = min(abs(h[i - j] - h[i]) + dp[i - j], dp[i]);
        }
    }

    cout << dp[n - 1] << endl;

    return 0;
}