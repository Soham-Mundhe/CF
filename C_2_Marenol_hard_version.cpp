#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    
    vector<int> a_eve, a_od;
    vector<int> b_even, b_odd;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == '1') {
            if (i % 2 == 0) a_eve.push_back(i / 2);
            else            a_od.push_back(i / 2);
        }
        if (b[i] == '1') {
            if (i % 2 == 0) b_even.push_back(i / 2);
            else            b_odd.push_back(i / 2);
        }
    }
    
    if (a_eve.size() != b_even.size() || a_od.size() != b_odd.size()) {
        cout << -1 << endl;
        return;
    }
    
    long long min_operations = 0;
    
    for (size_t i = 0; i < a_eve.size(); i++) {
        min_operations += abs(a_eve[i] - b_even[i]);
    }
    
    for (size_t i = 0; i < a_od.size(); i++) {
        min_operations += abs(a_od[i] - b_odd[i]);
    }
    
    cout << min_operations << endl;
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