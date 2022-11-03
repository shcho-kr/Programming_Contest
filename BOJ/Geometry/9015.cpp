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

int size(pair<int,int>* p1,pair<int,int>* p2){
    return pow(p1->first-p2->first,2)+pow(p1->second-p2->second,2);
}

int main() {
    ios_base::sync_with_stdio(false);
    
    int t; cin>>t;
    
    while(t--){
        int n, nn; cin>>n; nn=n;
        set<pair<int,int>> points;

        while(nn--){
            int x,y; cin>>x>>y;
            points.insert({x,y});
        }

        int ans=0;
        
        for(auto& i:points){
            for(auto& j:points){
                if(i==j) continue;

                pair<int,int> p1=i;
                pair<int,int> p2=j;

                int xdiff = p2.first-p1.first;
                int ydiff = p1.second-p2.second;

                pair<int,int> p3={p1.first+ydiff,p1.second+xdiff};
                pair<int,int> p4={p2.first+ydiff,p2.second+xdiff};

                if(points.find(p3)!=points.end() && points.find(p4)!=points.end()){
                    int d=size(&p1,&p2);
                    ans=max(ans,d);
                }
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}