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
    vector<vector<int>> a(2*n+2);
    int A[2*n+2]={};

    for(int i=1;i<=n;i++){
        int tmp; scanf("%d",&tmp);

        A[2*i]+=A[tmp]; A[2*i]++;
        A[2*i+1]+=A[tmp]; A[2*i+1]++;

    }
    
    for(int i=0;i<n*2+1;i++){
        cout<<A[i+1]<<endl;
    }
	return 0;
}