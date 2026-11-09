#include<iostream>
#include<vector>
#include <numeric>
#include <set>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <queue>
#include <unordered_map>
#include <climits>
#include <unordered_set>
#include <ctype.h>
#include <math.h>
#include <map>

using namespace std;

void solve_quatn() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<pair<char, int>> v;
    long long c0 = 0, c1 = 0;

    for (char c : s) {
        if (c == '0') c0++;
        else c1++;

        if (v.empty() || v.back().first != c) {
            v.push_back({c, 1});
        } else {
            v.back().second++;
        }
    }

    int m = v.size();
    long long req0 = 0, req1 = 0;

    for (auto& p : v) {
        if (p.first == '0') req0 += p.second - 1;
        else req1 += p.second - 1;
    }

   
    if (abs(req0 - req1) <= 1) {
        cout << req0 + req1 <<endl;
        return;
    }

    long long ans = -1;

    
    auto check = [&](int L, int R) {
        if (L > R || R >= m) return;

        int len = R - L + 1;
        long long k0 = (v[L].first == '0') ? (len + 1) / 2 : len / 2;
        long long k1 = len - k0;

        long long del0 = c0 - k0;
        long long del1 = c1 - k1;

        if (abs(del0 - del1) <= 1) {
            long long cur = del0 + del1;
            if (ans == -1 || cur < ans) {
                ans = cur;
            }
        }
    };

   
    for (int L = 0; L < m; ++L) {
        long long diff = c0 - c1;

        for (int d = -2; d <= 2; ++d) {
            long long target_len = (v[L].first == '0') ? (diff + d) : (-diff + d);
            int R = L + target_len - 1;
            if (R >= L && R < m) {
                check(L, R);
            }
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    
    int t;
    cin >> t;
    while (t--) {
        solve_quatn();
    }



    return 0;
}