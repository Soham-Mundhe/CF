#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;cin>>s;
        int ans = INT_MAX;
        for(char ch : s){
            ans = min(ans,ch - '0');
        }
        cout<<ans<<endl;
    }



    return 0;
}