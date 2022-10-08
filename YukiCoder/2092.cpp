#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>
#define ll long long
using namespace std;

// link : 

int main() {
	
    int n; cin>>n;
    int A[n]; for(int i=0;i<n;i++) scanf("%d",&A[i]);

    int B[A[0]+1]={};
    for(int i=0;i<n;i++){
        B[A[i]]++;
    }
    for(int i=A[0];i>1;i--){
        B[i-1]+=B[i];
    }
    for(int i=1;i<=A[0];i++){
        cout<<B[i]<<' ';
    }


	return 0;
}