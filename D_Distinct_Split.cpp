#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> prefix(n);
        vector<int> suffix(n);

        bool seen[26] = {};

        int cnt = 0;

        // Prefix
        for (int i = 0; i < n; i++) {

            int x = s[i] - 'a';

            if (!seen[x]) {
                seen[x] = true;
                cnt++;
            }

            prefix[i] = cnt;
        }

        // Reset
        fill(seen, seen + 26, false);
        cnt = 0;

        // Suffix
        for (int i = n - 1; i >= 0; i--) {

            int x = s[i] - 'a';

            if (!seen[x]) {
                seen[x] = true;
                cnt++;
            }

            suffix[i] = cnt;
        }

        int ans = 0;

        for (int i = 0; i < n - 1; i++) {

            ans = max(ans, prefix[i] + suffix[i + 1]);
        }

        cout << ans << '\n';
    }

    return 0;
}