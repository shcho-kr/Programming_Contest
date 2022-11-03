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

double dist(double x1, double y1, double x2, double y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cout<<fixed;
    cout.precision(10);
    
    double xa,ya,xb,yb,xc,yc;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;

    if(abs((ya-yb)/(xa-xb))==abs((yc-yb)/(xc-xb))) cout<<-1<<endl;
    else{
        vector<double> v;
        v.push_back(dist(xa,ya,xb,yb));
        v.push_back(dist(xb,yb,xc,yc));
        v.push_back(dist(xc,yc,xa,ya));

        sort(v.begin(),v.end(),greater<double>());
        cout<<(v[0]-v[2])*2<<endl;
    }

	return 0;
}