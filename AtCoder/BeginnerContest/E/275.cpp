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
    
    // cout.width();
    // cout.fill('0');
    // cout.precision(3);
	
    int n,m,k;
    cin>>n>>m>>k;

    double dp[n+2]={};

    for(int i=0;i<k;i++){
        double tmp[n+2];
        for(int i=0;i<=n;i++) tmp[i]=dp[i],tmp[i]=dp[i];

        for(int i=0;i<=n;i++){
            for(int j=1;j<=m;j++){
                (i+j<=n)? tmp[i+j]=dp[i]+1 : tmp[2*n-(i+j)]=dp[i]+1;
            }
        }
        for(int i=0;i<=n;i++) dp[i]=tmp[i];
    }

    //for(int i=0;i<=n;i++) cout<<dp[i]<<' ';

    while(dp[n]!=)

	return 0;
}