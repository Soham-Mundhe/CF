#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    
    vector<int> a(2 * n + 1);
    vector<int> L(n + 1, 0);
    vector<int> R(n + 1, 0);
    
    for (int i = 1; i <= 2 * n; ++i) {
        cin >> a[i];
        if (L[a[i]] == 0) {
            L[a[i]] = i;
        } else {
            R[a[i]] = i;
        }
    }

    
    vector<int> left_endpoint(2 * n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        left_endpoint[R[i]] = L[i];
    }

   
    vector<long long> dp(2 * n + 1, 0);
    for (int i = 1; i <= 2 * n; ++i) {
        
        dp[i] = dp[i - 1];
        
        
        if (left_endpoint[i] > 0) {
            long long len = i - left_endpoint[i] + 1;
            long long weight = len * len - len; 
            dp[i] = max(dp[i], dp[left_endpoint[i] - 1] + weight);
        }
    }

   
    cout << dp[2 * n] + 2 * n << endl;
}

int main() {
    
   
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}