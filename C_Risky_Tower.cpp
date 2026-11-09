#include<iostream>
#include<vector>
#include <numeric>
#include <set>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <queue>
#include <unordered_map>
#include <climits>
#include <unordered_set>
#include <ctype.h>
#include <math.h>
#include <map>

using namespace std;


void solve_ans() {
    int n, m;
    cin >> n >> m;

    vector<long long> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<vector<long long>> a(n, vector<long long>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    
    int ans = m;

    
    priority_queue<long long> max_hea;

   
    for (int k = n - 1; k >= 0; --k) {
        
        for (int j = 0; j < m; ++j) {
            max_hea.push(a[k][j]);
        }

        
        long long curr_dam = 0;
        int pieces_count = 0;

        
        vector<long long> popped;

        while (!max_hea.empty() && curr_dam < v[k] && pieces_count < ans - 1) {
            long long val = max_hea.top();
            max_hea.pop();
            popped.push_back(val);

            curr_dam += val;
            pieces_count++;
        }

        if (curr_dam >= v[k]) {
            ans = min(ans, pieces_count);
        }

        
        for (long long val : popped) {
            max_hea.push(val);
        }

      
        if (ans == 1) break;
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve_ans();
    }

    return 0;
}