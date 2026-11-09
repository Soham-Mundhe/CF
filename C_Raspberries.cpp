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
        int n,k;cin>>n>>k;

        vector<int>a(n);

        for(int i =0;i < n;i++){
            cin>>a[i];
            
        }

        int ans = 100;

        for(int x : a){
            int cost = (k - x % k) % k;
            ans = min(ans,cost);
        }

        if(k == 4){
            int even = 0;

            for(int x : a){
                if(x % 2 == 0) even++;
            }

            if(even >= 2) ans = min(ans,0);
            else if(even == 1) ans = min(ans,1);
            else ans = min(ans,2);
        }

        cout<<ans<<endl;
    }

    return 0;
}