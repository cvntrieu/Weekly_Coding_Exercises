// Accepted Answer:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#define FOR(i, a, b) for (int i = a; i <= b; i++)

using namespace std;

int main() {
    
    int n, q, val;
    cin >> n;                     
    vector<int> a(n);
    sort(a.begin(), a.end());
    FOR(i, 0, n - 1) cin >> a[i]; 
    cin >> q;                     
    vector<string> ans(q);
    vector<int> num(q);

    FOR(i, 0, q - 1) {

        cin >> val;               
        auto it = lower_bound(a.begin(), a.end(), val);

        ans[i] = (it != a.end() && *it == val) ? "Yes" : "No";
// it = Pos of the first value which is equal to, OR first-of-all greater than val
// it == val checks whenever *it is exactly the val, or a greater one
        num[i] = it - a.begin() + 1; // NOT num = it + 1 only, we must - a.begin() !!!
    }

    FOR(i, 0, q - 1) {
        cout << ans[i] << " " << num[i] << endl;
    }

    return 0;
}
