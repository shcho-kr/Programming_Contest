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
	
    int h,w,cnt=0;
    cin>>h>>w;
    char c[h][w];

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>c[i][j];
        }
    }

    for(int j=0;j<w;j++){
        for(int i=0;i<h;i++){
            if(c[i][j]=='#') cnt++;
        }
        cout<<cnt<<' ';
        cnt=0;
    }


	return 0;
}