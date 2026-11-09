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
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long max_len = 0;
        int i = 0;
        
        while (i < n) {
            // Zeros act as boundaries since operations require positive subarrays
            if (a[i] == 0) {
                max_len = max(max_len, 1LL);
                i++;
                continue;
            }

            // Find the contiguous segment of positive numbers
            int j = i;
            while (j < n && a[j] > 0) {
                j++;
            }

            // Process segment from i to j-1 using a monotonic stack approach
            vector<long long> st;
            for (int k = i; k < j; k++) {
                while (!st.empty() && st.back() >= a[k]) {
                    st.pop_back();
                }
                st.push_back(a[k]);
                max_len = max(max_len, (long long)st.size());
            }

            i = j;
        }

        cout << max_len << "\n";
    }
    
    return 0;
}