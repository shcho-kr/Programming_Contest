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
	
    int n; cin>>n;
    vector<int> even,odd;

    for(int i=0;i<n;i++){
        int a; scanf("%d",&a);
        (a&1) ? odd.push_back(a) : even.push_back(a);
    }
    sort(even.rbegin(),even.rend());
    sort(odd.rbegin(),odd.rend());

    int mx=-1;
    if(even.size()>=2) mx=max(mx,even[0]+even[1]);
    if(odd.size()>=2) mx=max(mx,odd[0]+odd[1]);

    cout<<mx<<endl;

    return 0;
   
}