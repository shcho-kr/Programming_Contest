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
    set<string> s;

    while(n--){
        string tmp; cin>>tmp;
        s.insert(tmp);
    }

    vector<string> ans(s.begin(),s.end());

    sort(ans.begin(),ans.end(),
    [](string s1, string s2){
        if(s1.length()==s2.length()) return s1<s2;
        else return s1.length()<s2.length();
    });

    for(auto& item:ans){
        cout<<item<<endl;
    }

	return 0;
}