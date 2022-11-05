#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <numeric>
#include <cmath>
#include <map>
#define ll long long
#define endl '\n'
using namespace std;
// category : 

int factorial(int n){
    return (n==1 || n==0) ? 1 : n*factorial(n-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    
    int n; cin>>n;
    vector<int> s;
    for(int i=0;i<n;i++){
        int p; cin>>p; s.push_back(p);
    }
    prev_permutation(s.begin(),s.end());

    for(int t : s){
        cout<<t<<' ';
    }

	return 0;
}