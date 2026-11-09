
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
        int n,m;cin>>n>>m;

        string s;cin>>s;

        vector<int>freq(7,0);

        for(int i = 0;i < n;i++){
            freq[s[i] - 'A']++;
        }

        int ans = 0;

        for(int i = 0;i < 7;i++){
            if(freq[i] < m){
                ans += m - freq[i];
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
