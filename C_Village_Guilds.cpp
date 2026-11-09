#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    
    vector<int> p(n + 1);
    vector<int> depth(n + 1, 0);
    vector<int> max_depth(n + 1, 0);
    
    
    for (int i = 2; i <= n; i++) {
        cin >> p[i];
        depth[i] = depth[p[i]] + 1;
    }

  
    for (int i = 1; i <= n; i++) {
        max_depth[i] = depth[i];
    }

    
    for (int i = n; i >= 2; i--) {
        max_depth[p[i]] = max(max_depth[p[i]], max_depth[i]);
    }

   
    vector<int> max_child_depth(n + 1, -1);
    vector<int> second_max_child_depth(n + 1, -1);

    
    for (int i = 2; i <= n; i++) {
        int parent = p[i];
        int md = max_depth[i];
        
        if (md > max_child_depth[parent]) {
            second_max_child_depth[parent] = max_child_depth[parent];
            max_child_depth[parent] = md;
        } else if (md > second_max_child_depth[parent]) {
            second_max_child_depth[parent] = md;
        }
    }

    
    long long total_guilds = n; 
   
    for (int i = 1; i <= n; i++) {
        if (second_max_child_depth[i] != -1) {
            long long valid_depths = second_max_child_depth[i] - depth[i];
            if (valid_depths > 0) {
                total_guilds += valid_depths;
            }
        }
    }

    cout << total_guilds << "\n";
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}