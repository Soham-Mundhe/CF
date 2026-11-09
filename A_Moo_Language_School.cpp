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
        int n,k;cin>>n>>k;

        string s;cin>>s;

        int ans = 0;

        for(int i = 0;i < n;i+=k){
            bool z = false;

            for(int j = i;j < i+k;j++){
                if(s[j] == '0'){
                    z = true;
                    break;
                }
            }
            if(!z) ans++;
        }

        cout<<ans<<endl;

        // for(int i = 0;i < n;i++){
        //     if(s.substr(i,k).find('0') == string::npos){
        //         ans++;
        //     }
        // }

        // cout<<ans<<endl;

    }
    return 0;
}