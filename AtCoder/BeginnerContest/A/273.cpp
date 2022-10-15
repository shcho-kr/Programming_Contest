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
// category : 

int main() {
	
    int n; cin>>n;
    int v[11]={1};

    for(int i=1;i<=n;i++){
        v[i]=i*v[i-1];
    }

    cout<<v[n]<<endl;

	return 0;
}