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
    int t;
    cin >> t;

    while (t--) {
       int n;cin>>n;
       string s;cin>>s;


       int base = 1;
       for(int i = 1;i < n;i++){
            if(s[i] != s[i -1])
                base++;
        }

       int ans = base;

       for(int i = 1;i < n-1;i++){
            if(s[i-1] == s[i+1] && s[i] != s[i - 1]){
                ans = min(ans,base-2);
            }else if(s[i] != s[i-1] && s[i] != s[i+1]){
                ans = min(ans,base - 1);
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}