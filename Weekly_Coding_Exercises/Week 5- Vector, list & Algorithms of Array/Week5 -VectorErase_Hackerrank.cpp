// Accepted Answer
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define FOR(a, b) for (int i = a; i < b; i++)
using namespace std;


int main() {
    
    int n;
    cin >> n;
    vector<int> v(n);
    FOR(0, n) cin >> v[i];

    int pos, s, e;
    cin >> pos >> s >> e;

    v.erase(v.begin() + pos - 1);
    v.erase(v.begin() + s - 1, v.begin() + e - 1);
    cout << v.size() << endl;
   FOR(0, v.size()) cout << v[i] << " ";

    return 0;
}
