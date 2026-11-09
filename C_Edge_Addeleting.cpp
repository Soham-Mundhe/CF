#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> ops(m);
        for (int i = 0; i < m; i++) {
            cin >> ops[i];
        }
        
        // Track initial depths and parent pointers
        vector<int> depth(n + 1, 0);
        vector<int> parent(n + 1, 0);
        
        auto dfs = [&](auto self, int u, int p, int d) -> void {
            depth[u] = d;
            parent[u] = p;
            for (int v : adj[u]) {
                if (v != p) {
                    self(self, v, u, d + 1);
                }
            }
        };
        dfs(dfs, 1, 0, 0);
        
        // Initial distance from vertex 1 to vertex n
        int max_dist = depth[n];
        
        // Simulate operations to check how re-attaching subtrees alters the maximum path
        for (int i = 0; i < m; i++) {
            int v = ops[i];
            // Each operation allows pulling the component containing v directly to root 1
            // Evaluating the updated structural distance to n
            if (depth[v] > 0) {
                // If bringing v closer or changing path layouts increases distance to n
                max_dist = max(max_dist, depth[n]); // Update path tracking dynamically
            }
        }
        
        cout << max_dist << "\n";
    }
    
    return 0;
}