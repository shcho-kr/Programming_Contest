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
// category : prime number

int main() {
	
    bool p[1001]={1,1};

    for(int i=2;i<1001;i++){
        if(p[i]==true) continue;

        int tmp=2;
        while(i*tmp<1001){
            p[i*tmp]=true;
            tmp++;
        }
    }

    int n, ans=0; cin>>n;

    for(int i=0;i<n;i++){
        int tmp; cin>>tmp;
        if(p[tmp]==false) ans++;
    }

    cout<<ans<<endl;
    
	return 0;
}