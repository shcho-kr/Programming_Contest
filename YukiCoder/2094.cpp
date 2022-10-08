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
	
    int n,k,cnt=0;

    for(int i=0;i<2*n;i++){
        string s; cin>>s;
        for(int j=0;j<2*n;j++){
            if(s[j]=='#') cnt++;
        }
    }

    int C[n][n]={};

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&C[i][j]);
        }
    }


	return 0;
}