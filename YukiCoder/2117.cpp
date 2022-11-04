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
    
    int b0, b1, c0, c1; cin>>b0>>c0>>b1>>c1;

    int l=b0*b1/__gcd(b0,b1);
    while(c0<0) c0+=b0;
    while(c1<0) c1+=b1;

    for(int i=0;i<=l;i++){
        if(i%b0==c0%b0 && i%b1==c1%b1){
            cout<<i<<endl;
            return 0;
        }
    }

    cout<<"NaN"<<endl;
	return 0;
}