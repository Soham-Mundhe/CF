
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
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 

        int maxi = 0;

        for (int i = 0; i < n; i++) {
            int cnt = 0;


            for (int j = 0; j < n; j++) {
                if (a[j] % a[i] == 0) {
                    cnt++;
                }
            }

            maxi = max(maxi, cnt);
        }

        cout << n - maxi << endl;

    }




    
    return 0;
}
