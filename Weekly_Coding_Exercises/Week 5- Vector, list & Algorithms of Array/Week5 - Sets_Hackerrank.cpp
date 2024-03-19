// Accepted Answer:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#define FOR(a, b) for (int i = a; i <= b; i++)
using namespace std;


int main() {
   
    set<int> s;
    string r[100001] = { "" };
    int q, x, y;
    cin >> q;
    FOR(1, q) {

        cin >> x >> y;
        if ( x == 1 )
        {
            s.insert(y);
        }

        if ( x == 2 )
        {
            s.erase(y);
        }

        if ( x == 3 )
        {
                auto result = s.find(y);
                if (result != s.end()) r[i] = "Yes";
                else r[i] = "No";
        }
    }

    FOR(1, q) {
        if (r[i] != "") cout << r[i] << endl;
    }

    return 0;
}
