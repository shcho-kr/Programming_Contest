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

double nongdo(pair<ll, ll> v){
    double sato, mizu;
    sato = double(v.first);
    mizu = double(v.second);
    return sato / (sato+mizu) * 100;
}

double mix(pair<ll, ll> v1,pair<ll, ll> v2){
    double sato1, mizu1, sato2, mizu2;
    sato1 = double(v1.first);
    mizu1 = double(v1.second);
    sato2 = double(v2.first);
    mizu2 = double(v2.second);
    return (sato1+sato2)/(sato1+mizu1+sato2+mizu2) *100;
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.precision(10);
    cout.fill('0');
    
    int n,m,k; cin>>n>>m>>k;
    vector<pair<ll, ll>> takahashi, aoki;
    for(int i=0;i<n;i++){
        ll a, b; cin>>a>>b;
        takahashi.push_back(make_pair(a,b));
    }
    for(int i=0;i<m;i++){
        ll c, d; cin>>c>>d;
        aoki.push_back(make_pair(c,d));
    }

    /*
    농도기준 소트는 의미 없을지도??
    왜냐하면 엄청 용량 큰 병이 있을시 그쪽으로 농도가 끌려가버림.
    */
    sort(takahashi.begin(),takahashi.end(),[](pair<ll, ll> i, pair<ll, ll> j){
        return i.first * (j.first+j.second) > j.first * (i.first+i.second);
    });
    sort(aoki.begin(),aoki.end(),[](pair<ll, ll> i, pair<ll, ll> j){
        return i.first * (j.first+j.second) > j.first * (i.first+i.second);
    });

    int t=0, a=0;
    while(t+a<k-1){
        break;
    }
    cout<<"idx : "<<t<<' '<<a<<endl;
    cout<<mix(takahashi[t],aoki[a])<<endl;

	return 0;
}