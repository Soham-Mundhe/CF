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
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);

        string ans = "";

        ans += s[0];

        for(int i = 0;i < s.length();i++){
            if(s[i] == ' ') ans += s[i+1];
        }

        cout<<ans<<endl;

        
    }
    return 0;
}