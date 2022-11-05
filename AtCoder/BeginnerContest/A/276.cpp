#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <numeric>
#include <cmath>
#include <map>
#define ll long long
#define endl '\n'
using namespace std;
// category : 

int main() {
    ios_base::sync_with_stdio(false);
    
    string s; cin>>s;
    int ans=-1;

    for(int i=0;i<s.length();i++){
        if(s[i]=='a') ans=i+1;
    }

    cout<<ans<<endl;
	return 0;
}