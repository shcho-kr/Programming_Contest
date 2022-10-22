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
	
    int n,flag=1,a,tx,ty; cin>>n>>tx>>ty;
    bool x[20001]={},y[20001]={};
    x[10000]=true; y[10000]=true;

    cin>>a; x[a+10000]=true; n--;

    while(n--){
        cin>>a;
        if(flag%2==0){
            bool dpx[20001]={};
            for(int i=0;i<20001;i++){
                if(x[i]!=true) continue;
                if(i-a>=0){
                    dpx[i-a]=true;
                }
                if(i+a<20001){
                    dpx[i+a]=true;
                }
            }
            swap(x,dpx);
        }
        else{
            bool dpy[20001]={};
            for(int i=0;i<20001;i++){
                if(y[i]!=true) continue;
                if(i-a>=0){
                    dpy[i-a]=true;
                }
                if(i+a<20001){
                    dpy[i+a]=true;
                }
            }
            swap(y,dpy);
        }
        flag++;
    }

    if(x[tx+10000]==true && y[ty+10000]==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

	return 0;
}