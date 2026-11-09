#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <queue>
#include <unordered_map>
#include <climits>
#include <unordered_set>
#include <ctype.h>
using namespace std;


const int INF = 1e9;

int main() {
    

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans = INF;

        for (int totR = k; totR <= n - k; totR++) {

            int totL = n - totR;

            vector<vector<int>> dp(n + 1, vector<int>(totR + 1, INF));
            dp[0][0] = 0;

            for (int i = 0; i < n; i++) {
                for (int r = 0; r <= totR; r++) {
                    if (dp[i][r] == INF) continue;

                    int l = i - r;

                    if (r < totR && totL - l >= k) {
                        dp[i + 1][r + 1] = min(
                            dp[i + 1][r + 1],
                            dp[i][r] + (s[i] != 'R')
                        );
                    }

                    if (l < totL && r >= k) {
                        dp[i + 1][r] = min(
                            dp[i + 1][r],
                            dp[i][r] + (s[i] != 'L')
                        );
                    }
                }
            }

            ans = min(ans, dp[n][totR]);
        }

        if (ans == INF) cout << -1 << endl;
        else cout << ans << endl;
    }

    return 0;
}