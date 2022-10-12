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
	
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int n, k; string s;
        cin>>n>>k>>s;

        int ans=0, left=0, middle=0, right=0;

        for(int i=0;i<k;i++) if(s[i]!='0') middle++;
        for(int i=k;i<n;i++) if(s[i]=='1') right++;
        if(middle==k && right==0) ans++;

        for(int i=1;i<n-k+1;i++){
            if(s[i-1]=='1') left++;
            if(s[i-1]!='0') middle--;
            if(s[i+k-1]!='0') middle++;
            if(s[i+k-1]=='1') right--;
            
            if(left==0 && middle==k && right ==0) ans++;
        }

        if(ans==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

	return 0;
}