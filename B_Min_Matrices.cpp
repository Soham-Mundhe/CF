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
#include <cmath>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k < n || k > 2 * n - 1) {
            cout << -1 << endl;
            continue;
        }

        vector<vector<int>> a(n, vector<int>(n, 0));

        int d = k - n;

        int same = n - d;

        vector<bool> used(n * n + 1, false);

        for (int i = 0; i < same; i++) {
            a[i][i] = i + 1;
            used[i + 1] = true;
        }

        

        for (int j = same; j < n; j++) {
            int val = j + 1;
            a[0][j] = val;
            used[val] = true;
        }

        int val = n + 1;


        for (int i = same; i < n; i++) {
            a[i][0] = val;
            used[val] = true;
            val++;
        }

        int x = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (a[i][j] != 0)
                    continue;

                while (used[x])
                    x++;

                a[i][j] = x;
                used[x] = true;
            }
        }


        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}