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
    
    int n,t,ans=0; cin>>n; t=n;
    bool count[n]={};

    vector<vector<vector<int>>> rectangles;

    while(t--){
        vector<int> p1(3),p2(3),p3(3),p4(3);
        cin>>p1[0]>>p1[1]>>p1[2]>>p2[0]>>p2[1]>>p2[2];
        
        for(int i=0;i<3;i++){
            p3[i]=p1[i];
            p4[i]=p2[i];
        }

        if(p1[0]==p2[0]){
            p3[1]=p2[1];
            p4[1]=p1[1];
        }
        if(p1[1]==p2[1]){
            p3[0]=p2[0];
            p4[0]=p1[0];
        }
        if(p1[2]==p2[2]){
            p3[0]=p2[0];
            p4[0]=p1[0];
        }

        vector<vector<int>> rt;
        rt.push_back(p1);
        rt.push_back(p2);
        rt.push_back(p3);
        rt.push_back(p4);

        rectangles.push_back(rt);
    }

    for(int t=0;t<n;t++){
        for(int tt=0;tt<n;tt++){
            if(t==tt) continue;

            bool check=false;
            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(rectangles[t][i]==rectangles[tt][j]) check=true;
                }
            }

            if(check) count[t]=true, count[tt]=true;
        }
        // for(int i=0;i<4;i++){
        //     for(auto& p : rectangles[t][i]) cout<<p<<' ';
        // }
        // cout<<endl;
    }

    for(int i=0;i<n;i++) if(count[i]==true) ans++;

    cout<<ans<<endl;

	return 0;
}