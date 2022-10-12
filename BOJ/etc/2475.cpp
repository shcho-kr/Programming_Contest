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
	
    int check=0;
    for(int i=0;i<5;i++){
        int tmp; cin>>tmp;
        check+=tmp*tmp;
    }
    cout<<check%10<<endl;

	return 0;
}