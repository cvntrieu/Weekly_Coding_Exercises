
// Accepted Answer:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#define FOR(a, b) for (int i = a; i <= b; i++ )

using namespace std;


int main() {
   
    int q;
    cin >> q;
    map<string, int> m;
    vector<int> scoreBoard(q); 
 // vector's size must be declared (=q), so 'scoreBoard[i]' can be used later !!!
    int pos = -1;
    int type;
    string name;
    int score;

   FOR(1, q) {

        bool isScoreExisted = false;
        cin >> type >> name;

        switch (type) {

        case 1: 
        {
            cin >> score;
            m[name] += score;
            isScoreExisted = true;
            break;
        } 

        case 2: 
        {
            m.erase(name);
            isScoreExisted = false;
            break;
        }
        case 3: 
        {
            pos++;
            scoreBoard[pos] = m[name];
            break;
        }
        default:
        {
            break;
        }
        }
    }

    FOR(0, pos) cout << scoreBoard[i] << endl;

    return 0;
}
