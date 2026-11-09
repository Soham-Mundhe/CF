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


void solve_Quation() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    long long total_sum = 0;

    int max_f = 0;
    int max_v = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];

        total_sum += a[i];

        freq[a[i]]++;

        if (freq[a[i]] > max_f) {
            max_f = freq[a[i]];
            max_v = a[i];
        }
    }

    int other_count = n - max_f;

   
    if (max_f > other_count + 1) {
        
        long long other_sum = total_sum - (long long)max_f * max_v;
        long long max_damage = other_sum + (long long)(other_count + 2) * max_v;
        cout << max_damage << endl;
    } else {
       
        cout << total_sum << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve_Quation();
    }
    

    
    return 0;
}