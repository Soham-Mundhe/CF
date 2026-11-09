#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<long long> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    
   
    if (n < 2 * m) {
        cout << "NO"<<endl;
        return;
    }
    
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    bool possible = true;
    for (int i = 0; i < m; ++i) {
       
        if (!(a[i] < b[i] && b[i] < a[n - m + i])) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
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