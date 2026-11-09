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
using namespace std;


void solve_quatn() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n;i++) {
        cin >> a[i];
    }

    vector<pair<int, int>> blocks;
    for (int i = 0; i < n;i++) {
        if (blocks.empty() || blocks.back().first != a[i]) {
            blocks.emplace_back(a[i], 1);
        } else {
            blocks.back().second++;
        }
    }

    int m = blocks.size();
    int base_ans = m; 

    
    bool cansave2 = false;
    for (int i = 0; i + 1 < m;i++) {
        if (blocks[i].second >= 2 && blocks[i + 1].second >= 2) {
            cansave2 = true;
            break;
        }
    }

    if (cansave2) {
        cout << base_ans + 2 << endl;
        return;
    }

    
    bool cansave1 = false;
    for (int i = 0; i < m;i++) {
        if (blocks[i].second >= 2) {
           
            if (i - 1 >= 0) {
            
                if (i - 2 < 0 || blocks[i - 2].first != blocks[i].first) {
                    cansave1 = true;
                    break;
                }
            }
           
            if (i + 1 < m) {
            
                if (i + 2 >= m || blocks[i + 2].first != blocks[i].first) {
                    cansave1 = true;
                    break;
                }
            }
        }
    }

    if (cansave1) {
        cout << base_ans + 1 << endl;
    } else {
        cout << base_ans << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int TestsNumT;
    cin >> TestsNumT;
    while (TestsNumT--) {
        solve_quatn();
    }
    return 0;
}