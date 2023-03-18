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

    int n, count = 0;
    cin >> n;
    vector<int> a;
    bool x[n + 1] = {};

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    for (int i = 0; i < n; i++) {
        if (x[i] != true) {
            if (x[a[i] - 1] != true) {
                x[a[i] - 1] = true;
                count++;
            }
        }
    }

    cout << n - count << endl;
    for (int i = 0; i < n; i++)
        if (x[i] != true) cout << i + 1 << ' ';

    return 0;
}