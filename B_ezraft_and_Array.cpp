#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << 1 << endl;
    } else if (n == 2) {
        cout << -1 << endl;
    } else {
        cout << 1 << " " << 2 << " " << 3;
        long long current = 6;
        for (int i = 4; i <= n; ++i) {
            cout << " " << current;
            current *= 2;
        }
        cout << endl;
    }
}

int main() {
    
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}