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
// category : IO

int main() {
	
    int t,h,w,n; cin>>t;

    while(t--){
        cin>>h>>w>>n;
        vector<int> v;
        v.push_back((n%h)?(n%h):h);
        v.push_back((n%h)?n/h+1:n/h);

        cout<<v[0]*100+v[1]<<endl;
    }

	return 0;
}