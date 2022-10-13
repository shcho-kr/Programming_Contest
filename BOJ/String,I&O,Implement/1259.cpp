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
// category : string compare

int main() {
	
    string s; cin>>s;

    while(s.compare(string({'0'}))!=0){
        
        string s2 = s;
        reverse(s2.begin(),s2.end());

        if(s.compare(s2)==0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        
        cin>>s;
    }

	return 0;
}