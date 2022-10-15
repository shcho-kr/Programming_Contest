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
// category : 

int main() {
    
    int n;
    cin>>n;

    int a[n]={}, ans[n]={};

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    sort(a,a+n); reverse(a,a+n);

    int tmp=1,idx=0;

    for(int i=1;i<n;i++){
        if(a[i-1]==a[i]) tmp++;
        else {
            ans[idx]=tmp;
            idx++;
            tmp=1;
        }
    }
    ans[idx]=tmp;

    for(int i=0;i<n;i++) cout<<ans[i]<<endl;

	return 0;
}