
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

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        vector<int> best = a;
        vector<int> f(n);
        int best_val = -1;


        auto calculate = [&](vector<int>& v) {
            vector<bool> seen(n + 1, false);
            vector<int> mxval;
            int mex = 0;

            for (int i = 0; i < n; i++) {
                seen[v[i]] = true;

                while (seen[mex]) {
                    mex++;
                }


                mxval.push_back(mex);
            }

            sort(mxval.begin(), mxval.end(), greater<int>());
            return mxval[k - 1];
        };

        best_val = calculate(a);
        int x = -1, y = -1;


        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(a[i], a[j]);

                int value = calculate(a);

                if (value > best_val) {
                    best_val = value;
                    x = i;
                    y = j;
                }

                
                swap(a[i], a[j]);
            }
        }

        if (x == -1) {
            cout << -1 << endl;

        } else {
            cout << x + 1 << " " << y + 1 << endl;
        }
    }



    return 0;
}
