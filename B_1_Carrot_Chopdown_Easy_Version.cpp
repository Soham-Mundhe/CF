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
    int T;
    cin >> T;

    while (T--) {
        int n,m;cin>>n>>m;

        vector<int>freq(m+1,0);

        for(int i = 0;i < n;i++){
            int x;cin>>x;
            freq[x]++;
        }

        vector<int>suf(m+2,0);

        for(int x = m;x >= 1;x--){
            suf[x] = suf[x+1] + freq[x];
        }

        int ans = 0;

        for(int x = 1;x <= m;x++){
            int cur = freq[x];

            cur += suf[x+1];

            if(2*x <= m){
                cur += freq[2*x];
            }

            ans = max(ans,cur);
        }

        cout<<ans<<endl;
    }


    return 0;
}