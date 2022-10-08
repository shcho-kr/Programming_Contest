#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <numeric>
#define ll long long
using namespace std;

// link : 
// category : 

int main() {
	
    int n, a[101],sum=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++) sum+=a[i];

    cout<<sum;

	return 0;
}