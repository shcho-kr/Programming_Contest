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
// category : stack

int main() {
	
    int n; cin>>n;
    
    for(int i=0;i<n;i++){
        string s; cin>>s;
        int l=s.length(), ans=1;
        vector<char> v;

        for(int j=0;j<l;j++){
            if(s[j]=='(') v.push_back(s[j]);
            else if(!v.empty()) v.pop_back();
            else if(s[j]==')'){
                ans=0;
            }
        }
        if(v.empty() && ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

	return 0;
}