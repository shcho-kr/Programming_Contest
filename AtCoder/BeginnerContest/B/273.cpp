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
	
    ll x, k, tmp;
    cin>>x>>k;
    tmp=x;

    for(int i=0;i<k;i++){
        tmp=tmp/pow(10,i)+0.5;
        (tmp%10>=5)? tmp=(tmp/10+1)*10 : tmp=tmp/10*10;
        tmp=tmp*pow(10,i)+0.5;
        //cout<<tmp<<endl;
    }

    cout<<tmp<<endl;
	return 0;
}