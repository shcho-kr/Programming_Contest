#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>

#define ll long long

using namespace std;

// link : https://www.acmicpc.net/problem/2805

ll cutting(int n, int* tree, int height){
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=(tree[i]-height)>0 ? (tree[i]-height) : 0;
    }
    return sum;
}

int main() {
	
    int n, m; cin>>n>>m;
    int tree[n];
    for(int i=0;i<n;i++) scanf("%d",&tree[i]);

    int left=0, middle, right=1000000000;

    while(left+1<right){
        middle = int((right+left)/2);
        ll tmp = cutting(n,tree,middle);
        if(tmp>=m){ // too low to cut
            left=middle;
        }
        if(tmp<m){ // too high to cut
            right=middle;
        }
    }

    cout<<left;

	return 0;
}