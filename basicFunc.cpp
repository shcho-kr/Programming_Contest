#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define ll long long
#define endl '\n'
using namespace std;
// category :

int main() {
    ios_base::sync_with_stdio(false);

    // cout.width();
    // cout.fill('0');
    // cout.precision(3);

    cout << "Hello world!" << endl << endl;

    // for
    int list[3] = {1, 2, 3};
    cout << "Max value : " << *max_element(list, list + 3) << endl;
    for (int idx : list) {  // copy value
        cout << "List for with call-by-value : " << idx << endl;
    }
    for (int &idx : list) {  // copy address and value
        cout << "List for with call-by-reference : " << idx << endl;
    }
    int list2[10];
    fill_n(list2, 10, 3);
    cout << "fill list with 3 : ";
    for (int i : list2) cout << i << ' ';
    cout << endl << endl;

    // sort
    int list3[5] = {3, 1, 4, 2, 3};
    sort(list3, list3 + 5);
    cout << "sort list : ";
    for (int i : list3) cout << i << ' ';
    cout << endl;

    reverse(list3, list3 + 5);
    cout << "sort reverse : ";
    for (int i : list3) cout << i << ' ';
    cout << endl << endl;

    // vector
    vector<int> v1 = {1, 2, 3, 4, 5};
    cout << "vector & for : ";
    for (int i : v1) cout << i << ' ';
    cout << endl;
    cout << "vector first : " << v1.front() << endl;
    cout << "vector last : " << v1.back() << endl;

    vector<int> v2(v1);
    v2.push_back(6);
    cout << "vector push back : ";
    for (int i : v2) cout << i << ' ';
    cout << endl;
    cout << "vector size : " << v2.size() << endl;

    v2.insert(v2.begin() + 2, 7);
    cout << "vector insert : ";
    for (int i : v2) cout << i << ' ';
    cout << endl;

    sort(v2.begin(), v2.end());
    cout << "sorted vector : ";
    for (int i : v2) cout << i << ' ';
    cout << endl;

    sort(v2.begin(), v2.end(), greater<>());
    cout << "reverse sorted vector : ";
    for (int i : v2) cout << i << ' ';
    cout << endl;

    sort(v2.begin(), v2.end(), [](int i, int j) { return j > i; });
    cout << "sorted vector with lamda(operator) : ";
    for (int i : v2) cout << i << ' ';
    cout << endl;

    vector<bool> seen;
    seen.assign(5, false);
    cout << "seen vector assigning : ";
    for (bool b : seen) cout << b << ' ';
    cout << endl << endl;

    // 2D vector
    vector<vector<int>> graph(5);
    // vector<vector<int>> graph(5, vector<int>()); // it is same
    vector<int> v;
    graph.push_back(v);
    graph[0].push_back(3);
    cout << "2D vector graph[0][0] : " << graph[0][0] << endl;
    cout << "graph size : " << graph.size() << endl << endl;

    // ceil, floor
    double c = 1.2, f = 3.9, h4 = 5.4, h5 = 5.5;
    cout << "this is ceil of 1.2 : " << ceil(c) << endl;
    cout << "this is floor of 3.9 : " << floor(f) << endl;
    cout << "this is floor of 5.4 + 0.5 : " << floor(h4 + 0.5) << endl;
    cout << "this is floor of 5.5 + 0.5 : " << floor(h5 + 0.5) << endl;
    cout << endl;

    // string
    string s1 = "sh", s2 = "cho";
    cout << "string '+' func : " << s1 + s2 << endl;
    cout << "string length of shcho : " << s1.length() + s2.length() << endl;
    string s3 = s1 + s2;
    sort(s3.begin(), s3.end());
    cout << "sorted string " << s3 << endl;
    cout << endl;

    // set (it is ordered, not have same element)
    set<int> s = {3, 1, 4, 3};
    cout << "set items : ";
    for (int i : s) cout << i << ' ';
    cout << endl;

    cout << "set with reversed itr : ";
    for (auto itr = s.rbegin(); itr != s.rend(); itr++) cout << *itr << ' ';
    cout << endl;

    cout << "count, 3 is in the set(1) or not(0) : " << s.count(3) << endl;
    cout << "count, 5 is in the set(1) or not(0) : " << s.count(5) << endl;
    cout << "find, 6 is in the set(itr) or not(s.end()) : " << *s.find(4) << endl;

    s.insert(3);
    s.insert(5);
    s.insert(99);
    s.insert(100);
    s.insert(101);
    cout << "set items : ";
    for (int i : s) cout << i << ' ';
    cout << endl;
    cout << "lower bound(2) and upper bound(99) : " << *s.lower_bound(2) << ", " << *s.upper_bound(99) << endl;
    cout << endl;

    cout << "set erase(3) : ";
    s.erase(3);
    for (int i : s) cout << i << ' ';

    // map : key, valuer, no same key, ordered by key
    map<string, int> m;
    m.insert({"sh", 1});
    m.insert({"cho", 3});
    cout << "map items : " << endl;
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        cout << "key : " << itr->first;
        cout << ", value : " << itr->second << endl;
    }
    cout << endl;

    // pair
    pair<int, double> p;
    p.first = 1;
    p.second = 3.3;
    cout << "pair first, second : " << p.first << ", " << p.second << endl;
    cout << endl;

    // permutation (on dictionary orders -> must be sorted in advance)
    int list4[] = {1, 2, 3};
    cout << "permutation with sorted list : " << endl;
    do {
        for (int i : list4) cout << i << ' ';
        cout << endl;
    } while (next_permutation(list4, list4 + 3));

    int list5[] = {3, 1, 2};
    cout << "permutation with not sorted : " << endl;
    do {
        for (int i : list5) cout << i << ' ';
        cout << endl;
    } while (next_permutation(list5, list5 + 3));
    cout << endl;

    cout << "before prev permutation : " << endl;
    for (int i : list4) cout << i << ' ';
    cout << endl << "prev permutation : " << endl;
    prev_permutation(list4, list4 + 3);
    for (int i : list4) cout << i << ' ';
    cout << endl << "1 more prev permutation : " << endl;
    prev_permutation(list4, list4 + 3);
    for (int i : list4) cout << i << ' ';
    cout << endl << endl;

    // binary search
    cout << "binary search/lower bound/upper bound with v2 about 3 : " << endl;
    cout << "v2 : ";
    for (int i : v2) cout << i << ' ';
    cout << endl;
    cout << binary_search(v2.begin(), v2.end(), 3) << ' ';
    cout << lower_bound(v2.begin(), v2.end(), 3) - v2.begin() << ' ';
    cout << upper_bound(v2.begin(), v2.end(), 3) - v2.begin() << endl;
    cout << endl;

    // gcd lcm
    int a = 44, b = 77;
    cout << "gcd of 44 and 77 : " << gcd(a, b) << endl;
    cout << "lcm of 44 and 77 : " << lcm(a, b) << endl;
    cout << endl;

    return 0;
}