#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <numeric>
#define ll long long
using namespace std;

// link : 
// category : 

int main() {
	
    int t; cin>>t;
    
    for(int i=0;i<t;i++){
        int a, b, c=1000000001 ; cin>>a>>b;
        
        for(int i=min(a,b);i<c;i++){
            c=min(c,(a+b)%i);
        }

    }

	return 0;
}