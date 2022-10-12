#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>

#define ll long long

using namespace std;

// link : https://www.acmicpc.net/problem/2512
// binary search

int main() {
	
    int n, m; cin>>n;
    int budget[n];
    for(int i=0;i<n;i++){
        scanf("%d",&budget[i]);
    }
    cin>>m;

    int left=0, right=100000, middle;

    while(left+1<right){
        middle=int((left+right)/2);

        ll sum = 0;
        for(int i=0;i<n;i++){
            sum += (middle<budget[i]) ? middle : budget[i];
        }

        if(sum>m||*max_element(budget,budget+n)<middle) right=middle;
        else left=middle;
    }

    cout<<left;

	return 0;
}