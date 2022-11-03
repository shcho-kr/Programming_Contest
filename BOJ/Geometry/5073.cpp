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
    
    int a,b,c;
    
    while(1){
        cin>>a>>b>>c;
        if(!(a|b|c)) break;

        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end(),greater<int>());
        if(v[0]>=v[1]+v[2]) cout<<"Invalid"<<endl;
        else if(v[0]==v[1] && v[1]==v[2]) cout<<"Equilateral"<<endl;
        else if(v[0]==v[1] || v[1]==v[2]) cout<<"Isosceles"<<endl;
        else cout<<"Scalene"<<endl;
    }

	return 0;
}