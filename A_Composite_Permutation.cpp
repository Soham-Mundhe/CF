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

    while(t--){
        int n;
        cin >> n;

        if (n < 4) {
            cout << -1 << endl;
            continue;
        }


        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                cout << 4 <<" ";
            }else if (i == 4) {
                cout << 1 <<" ";
            }else {
                cout << i <<" ";
            }
        }

        cout << endl;

        
    }

    return 0;
}
