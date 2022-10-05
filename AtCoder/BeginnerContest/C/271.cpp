#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>

#define ll long long

using namespace std;

// link : https://atcoder.jp/contests/abc271/tasks/abc271_c?lang=ja
// binary search

int main() {
	
    int n;
    cin>>n;

    set<int> s;
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        s.insert(a);
    }

    int left=0, middle, right=n+1;

    while(left+1<right){
        middle = (left+right)/2;

        auto m = s.upper_bound(middle);
        int idx = distance(s.begin(),m);
        int books = idx+(n-idx)/2;

        if(middle>books) right=middle;
        else left = middle;
    }

    cout<<left<<endl;

	return 0;
}