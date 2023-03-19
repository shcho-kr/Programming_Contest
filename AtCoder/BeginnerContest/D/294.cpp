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

    int n, q;
    cin >> n >> q;
    set<int> ready;
    int call = 1;
    bool called[n + 1] = {};

    for (int i = 0; i < q; i++) {
        int event;
        cin >> event;
        if (event == 1) {
            called[call]=1;
            ready.insert(call);
            call++;
        }
        if (event == 2) {
            int target; cin>>target;
            ready.erase(target);
        }
        if (event == 3) {
            cout<<*ready.begin()<<endl;
        }
    }

    return 0;
}