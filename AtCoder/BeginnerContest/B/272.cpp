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
	
    int n,m;
    cin>>n>>m;

    set<pair<int,int>> s;

    for(int i=0;i<m;i++){
        int k;
        scanf("%d",&k);

        int x[k];
        for(int ii=0;ii<k;ii++){
            scanf("%d",&x[ii]);
        }

        for(int j=0;j<k-1;j++){
            for(int jj=j+1;jj<k;jj++){
                s.insert(make_pair(x[j],x[jj]));
            }
        }
    }

    if(s.size()==(n*(n-1))/2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    

	return 0;
}