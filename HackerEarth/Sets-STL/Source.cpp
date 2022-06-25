#include<bits/stdc++.h>
using namespace std;
int main() {
    set<int>s;
    int Q,x,y;
    cin >> Q;
    while (Q) {
        cin >> y>>x;
        if (y == 1) {
            s.insert(x);
        }
        else if (y == 2) {
            s.erase(x);
        }
        else if (y == 3) {
            auto it = s.find(x);
            if (it != s.end()) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        Q--;
    }
    
}