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
using namespace std;

// link : 
// category : 

int main() {
	
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n;
        map<int,int> a;
        bool checker=0;
        for(int j=0;j<n;j++){
            int tmp; cin>>tmp;
            a[tmp]++;
        }
        for(auto &itr : a){
            if(itr.second>=3){
                cout<<itr.first<<endl;
                checker=1;
                break;
            }
        }
        if(!checker) cout<<-1<<endl;
    }

	return 0;
}