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
    vector<pair<int,string>> v;

    while(n--){
        int t1; string t2;
        cin>>t1>>t2;
        v.push_back(make_pair(t1,t2));
    }

    stable_sort(v.begin(),v.end(),
    [](auto a, auto b){
        if(a.first < b.first) return true;
        else return false;
    });

    for(auto& tmp:v){
        cout<<tmp.first<<' '<<tmp.second<<"\n";
    }

	return 0;
}