
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
        int l, r;
        cin >> l >> r;

        int ans;

        
        if (l > 0 || r < 0) {
            ans = r - l;
        }
        else {
            ans = max(0, abs(l + r) - 1);
        }

        cout << ans << endl;
    }
    
    return 0;
}
