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
    
    // cout.width();
    // cout.fill('0');
    // cout.precision(3);
	
    int h, w; cin>>h>>w;

    int a[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(a[i][j]==0) cout<<'.';
            else cout<<char('A'+a[i][j]-1);
        }
        cout<<endl;
    }

	return 0;
}