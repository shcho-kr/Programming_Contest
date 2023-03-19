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

    int n, m;
    cin >> n >> m;
    vector<pair<int, char>> v;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(make_pair(t, 'A'));
    }
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        v.push_back(make_pair(t, 'B'));
    }
    sort(v.begin(), v.end());

    int idx = 0;
    while (idx < n + m) {
        if (v[idx].second == 'A') {
            cout << idx + 1 << ' ';
        }
        idx++;
    }
    idx = 0;
    cout << endl;

    while (idx < n + m) {
        if (v[idx].second == 'B') {
            cout << idx + 1 << ' ';
        }
        idx++;
    }
    idx = 0;
    cout << endl;

    return 0;
}