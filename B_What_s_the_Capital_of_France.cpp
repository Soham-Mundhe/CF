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

    int t;cin>>t;

   
    while (t--) {
        int n;
        cin >> n;
        
        long long mxvl = 0;
        long long inor = 0;
        bool alleqal = true;
        long long firstval = -1;
        
        for (int i = 0; i < n;i++) {
            long long x;
            cin >> x;
            if (i == 0) {
                firstval = x;
            } else if (x != firstval) {
                alleqal = false;
            }
            inor |= x;
            mxvl = max(mxvl, x);
        }
        
        if (n == 1 || alleqal) {
            cout << inor << endl;
        } else {
            long long msb = 0;
            while ((1LL << msb) <= mxvl) {
                msb++;
            }
            cout << (1LL << msb) - 1 << endl;
        }
    }
   
    return 0;
}