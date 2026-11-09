#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;cin>>s;

    char cur = 'a';
    int ans = 0;

    for(char ch : s){
        int diff = abs(cur - ch);

        ans += min(diff,26 - diff);

        cur = ch;
    }

    cout<<ans<<endl;
    return 0;
}