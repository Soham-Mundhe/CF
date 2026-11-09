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
#include <cmath>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;cin>>n;

        
        int count = 0;
        for(int i = 0;i < n;i++){
            int x;cin>>x;
            if(i % 2 != x % 2) count++;
        }
        

        if (count % 2 == 0)
            cout << count / 2 << '\n';
        else
            cout << -1 << '\n';
        
    }
    return 0;
}