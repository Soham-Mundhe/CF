#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        long long ans = 0;

        for (int b = 1; b <= n; b++) {
            long long m = n / b;
            ans += m * m;
        }

        cout << ans << '\n';
    }

    return 0;
}