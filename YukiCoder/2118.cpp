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
    
    int n, term=1; cin>>n;
    vector<string> v;

    v.push_back("{}");
    v.push_back("{{}}");

    while(n>=1<<term){
        string s="{";

        int tmp=term, idx=0;
        while(tmp>0){
            if(tmp%2==1){
                s=s+v[idx]+",";
            }
            tmp=tmp/2;
            idx++;
        }
        s.erase(--s.end());
        s=s+"}";
        v.push_back(s);
        term++;
    }

    cout<<v[n]<<endl;

	return 0;
}