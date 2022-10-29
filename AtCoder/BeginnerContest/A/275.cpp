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
#define endl '\n'
using namespace std;
// category : 

int main() {
    ios_base::sync_with_stdio(false);
    
    int n, max=0, idx=0; cin>>n;
    
    for(int i=0;i<n;i++){
        int tmp; cin>>tmp;
        if(max<tmp) idx=i, max=tmp;
    }

    cout<<idx+1<<endl;

	return 0;
}