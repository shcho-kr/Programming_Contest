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
    
    int n,g=0,count=0; cin>>n;
    vector<int> a;

    for(int i=0;i<n;i++){
        int tmp; cin>>tmp;
        a.push_back(tmp);
    }

    for(int i=0;i<n;i++){
        g=__gcd(g,a[i]);
    }

    for(int i=0;i<n;i++){
        a[i]/=g;
        while(a[i]%2==0){
            a[i]/=2;
            count++;
        }
        while(a[i]%3==0){
            a[i]/=3;
            count++;
        }
        if(a[i]!=1){
            cout<<-1<<endl;
            return 0;
        }
    }

    cout<<count<<endl;
	return 0;
}