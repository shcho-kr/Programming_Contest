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
#define endl '\n'
using namespace std;



// link : 
// category : 

int main() {
    ios_base::sync_with_stdio(false);
    
    int x,y; cin>>x>>y;

    if(x>0 && y>0) cout<<1<<endl;
    if(x<0 && y>0) cout<<2<<endl;
    if(x<0 && y<0) cout<<3<<endl;
    if(x>0 && y<0) cout<<4<<endl;

	return 0;
}