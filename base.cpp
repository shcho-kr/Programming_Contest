#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>

#define ll long long

using namespace std;

// link : 

int main() {
	
    cout<<"Hello world!"<<endl;

    int list[5]={1,2,3,4,5};
    cout<<"Max value : "<<*max_element(list,list+5)<<endl;

    for(int idx: list){ // copy value
        cout<<"List for with call-by-value : "<<idx<<endl;
    }

    for(int &idx: list){ // copy address and value
        cout<<"List for with call-by-reference : "<<idx<<endl;
    }

	return 0;
}