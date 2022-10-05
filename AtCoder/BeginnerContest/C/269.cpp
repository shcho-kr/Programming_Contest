#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>

#define ll long long

using namespace std;

// link : https://atcoder.jp/contests/abc269/tasks/abc269_c
// bitwise operation

int main() {
	
    ll n; cin>>n;
    vector <ll> answer={};

    for(ll i=(1ll<<60)-1;i>=0;i--){ // bitwise operation will be calculated later than +,-
        i&=n; // i has same bit with n
        answer.push_back(i);
    }

    reverse(answer.begin(),answer.end());

    for(auto &itr : answer) cout<<itr<<endl;

	return 0;
}