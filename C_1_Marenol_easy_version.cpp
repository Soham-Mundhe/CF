#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    
    int a_even_1 = 0, a_odd_1 = 0;
    int b_even_1 = 0, b_odd_1 = 0;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i] == '1') a_even_1++;
            if (b[i] == '1') b_even_1++;
        } else {
            if (a[i] == '1') a_odd_1++;
            if (b[i] == '1') b_odd_1++;
        }
    }
    
    if (a_even_1 == b_even_1 && a_odd_1 == b_odd_1) {
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