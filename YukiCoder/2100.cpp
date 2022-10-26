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
    
    int n,m; cin>>n>>m;

	vector<vector<ll>> dp1(2,vector<ll>(n+1,0));
	vector<vector<ll>> dp2(2,vector<ll>(n+1,0));

	vector<vector<bool>> flag1(2,vector<bool>(n+1,0));
	vector<vector<bool>> flag2(2,vector<bool>(n+1,0));

	flag1[0][1]=true;
	flag2[0][n]=true;
	
	int h[n+1]={}; for(int i=1;i<=n;i++) cin>>h[i];

	vector<set<int>> v(n+1);
	for(int i=0;i<m;i++){
		int x,y; cin>>x>>y;
		v[x].insert(y);
		v[y].insert(x);
	}

	for(int i=2;i<=n;i++){
		for(auto& j : v[i]){
			if(!(flag1[0][j]|flag1[1][j])) continue;
			
			if(h[i]>h[j]){
				if(flag1[0][j]){
					dp1[1][i]=max(dp1[1][i],dp1[0][j]+h[i]-h[j]);
					flag1[1][i]=true;
				}
			}
			else{
				dp1[0][i]=max({dp1[0][i],dp1[0][j],dp1[1][j]});
				flag1[0][i]=true;
			}
		}
	}
	if(flag1[0][n]|flag1[1][n])cout<<max(dp1[0][n],dp1[1][n])<<endl;
	else cout<<-1<<endl;

	for(int i=n-1;i>=1;i--){
		for(auto& j : v[i]){
			if(!(flag2[0][j]|flag2[1][j])) continue;
			
			if(h[i]>h[j]){
				if(flag2[0][j]){
					dp2[1][i]=max(dp2[1][i],dp2[0][j]+h[i]-h[j]);
					flag2[1][i]=true;
				}
			}
			else{
				dp2[0][i]=max({dp2[0][i],dp2[0][j],dp2[1][j]});
				flag2[0][i]=true;
			}
		}
	}
	if(flag2[0][1]|flag2[1][1]) cout<<max(dp2[0][1],dp2[1][1])<<endl;
	else cout<<-1<<endl;

	return 0;
}