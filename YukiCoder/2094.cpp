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

// link : https://yukicoder.me/problems/no/2094
// category : invariant, greedy

int main() {
	
    int n,cnt=0;
    ll k;
    cin>>n>>k;

    for(int i=0;i<2*n;i++){
        string s; cin>>s;
        for(int j=0;j<2*n;j++){
            if(s[j]=='#') cnt++;
        }
    }

    int C[n*2][n*2]={};
    vector<int> Cline;

    for(int i=0;i<n*2;i++){
        for(int j=0;j<n*2;j++){
            scanf("%d",&C[i][j]);
            Cline.push_back(C[i][j]);
        }
    }

    int P[n*2][n]={};
    vector<int> Pline;
    for(int i=0;i<n*2;i++){
        for(int j=0;j<n;j++){
            P[i][j]=C[i][j]+C[i][2*n-1-j];
            Pline.push_back(P[i][j]);
        }
    }

    sort(Cline.begin(),Cline.end());
    reverse(Cline.begin(),Cline.end());
    sort(Pline.begin(),Pline.end());
    reverse(Pline.begin(),Pline.end());

    // ll ans;
    // vector<ll> csum(Cline.size()), psum(Pline.size());
    // partial_sum(Cline.begin(),Cline.end(),csum.begin());
    // partial_sum(Pline.begin(),Pline.end(),psum.begin());

    ll csum=0, psum=0, ans;
    for(int i=0;i<cnt;i++){
        csum+=(ll)Cline[i];
    }
    for(int i=0;i<cnt/2;i++){
        psum+=(ll)Pline[i];
    }

    // Ternary operator returns reference variable // 1

    // ans = (cnt%2==0) ? max(csum[cnt-1],psum[cnt/2-1]+k) : csum[cnt-1];
    // cout<< ans << endl;
    
    ans = (cnt%2==0) ? max(csum, psum+k) : csum;
    cout<< ans << endl;

	return 0;
}