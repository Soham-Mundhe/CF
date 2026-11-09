#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void ansss() {
    int n;
    ll k;cin >> n >> k;
    

    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<ll> freq;
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            cnt++;
        } else {
            freq.push_back(cnt);
            cnt = 1;
        }
    }
    freq.push_back(cnt);

    sort(all(freq));

    int m = freq.size();
    vector<ll> suf(m + 1, 0);
    for (int i = m - 1; i >= 0; i--) {
        suf[i] = suf[i + 1] + freq[i];
    }

    ll ans = 0;
    for (int i = 0; i < m; i++) {
        
        if (i > 0 && freq[i] == freq[i - 1]) continue;
        
        ll rr = freq[i];
        ll Mm = m - i;
        ll sum = suf[i];

        if (Mm > 0) {
            ll diff = k - sum;
            if (diff % Mm == 0) {
                ll D = diff / Mm;
                if (D >= 1 - rr) {
                    ans++;
                }
            }
        }
    }
    
    cout << ans << endl;
}

int main() {
    
    
    int t;
    if (cin >> t) {
        while (t--) {
            ansss();
        }
    }
    return 0;
}