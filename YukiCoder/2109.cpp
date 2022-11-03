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
    
    int m,d,k; cin>>m>>d>>k;
    int lastDay[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    set<int> s;

    s.insert(m/10); s.insert(m%10);

    for(int i=0;i<7;i++){
        int tm,td;
        if(d+i>lastDay[m]){
            tm=m+1;
            td=d+i-lastDay[m];
        }
        else {
            tm=m;
            td=d+i;
        }
        if(m!=tm) s.insert(tm/10), s.insert(tm%10);
        s.insert(td/10); s.insert(td%10);
    }

    s.size()>=k ? cout<<"Yes"<<endl : cout<<"No"<<endl;

	return 0;
}