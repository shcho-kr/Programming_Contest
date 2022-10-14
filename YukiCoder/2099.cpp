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
	
    int t, x, a, y, b, ans=0;
    cin>>t>>x>>a>>y>>b;

    if(t>0){
        int day=0, spend=0;
        while(day<t){
            day+=a;
            spend+=x;
        }
    }
    else {
        
    }

    cout<<ans<<endl;

	return 0;
}