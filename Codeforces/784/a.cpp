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
	
    int t; cin>>t;

    for(int i=0;i<t;i++){
        int r; cin>>r;
        cout<<"Division ";
        if(r>=1900) cout<<'1'<<endl;
        if(1600<=r && r<1900) cout<<'2'<<endl;
        if(1400<=r && r<1600) cout<<'3'<<endl;
        if(r<1400) cout<<'4'<<endl;
    }

	return 0;
}