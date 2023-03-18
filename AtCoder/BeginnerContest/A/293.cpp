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

    for(int i=1;i<=s.length();i++){
        char a = s[i*2-1];
        char b = s[i*2-2];
        s[i*2-1]=b;
        s[i*2-2]=a;
    }

    cout<<s<<endl;

	return 0;
}