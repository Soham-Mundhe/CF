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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    while (t--) {
        int x, y, m;cin >> x >> y >> m;

        string s;cin >> s;

        const int MAX = 105;

        vector<vector<bool>> dp(MAX, vector<bool>(MAX, false));

        dp[x][y] = true;



        int ans = x + y;

        for (char ch : s) {


            vector<vector<bool>> ndp(MAX, vector<bool>(MAX, false));



            for (int i = 0; i < MAX; i++) {
                for (int j = 0; j < MAX; j++) {

                    if (!dp[i][j]) {
                        continue;
                    }

                    if (ch == '+') {



                        if (i > 0) {
                            ndp[i - 1][j + 1] = true;
                        }

                        if (j > 0) {
                            ndp[i][j + 1] = true;
                        }

                    }
                    else {



                        if (i > 0) {
                            ndp[i - 1][j] = true;

                        }



                        if (j > 0) {
                            ndp[i + 1][j - 1] = true;

                        }
                    }
                }
            }

            dp = ndp;


            for (int i = 0; i < MAX; i++) {
                for (int j = 0; j < MAX; j++) {
                    if (dp[i][j]) {

                        ans = max(ans, i + j);

                    }
                }
            }
        }

        cout << ans <<endl;
    }



    

    return 0;
}