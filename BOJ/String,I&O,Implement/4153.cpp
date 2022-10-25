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
// category : 

int main() {
    ios_base::sync_with_stdio(false);
    
    int a[3];

    while(1){
        cin>>a[0]>>a[1]>>a[2];
        if(a[0]+a[1]+a[2]==0) break;
        sort(a,a+3);

        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }

	return 0;
}