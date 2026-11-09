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

int main(){
    int t;cin>>t;

    while(t--){
        string s;cin>>s;

        string ans = "";

        for(int i = 0;i < s.length();i += 2){
            ans += s[i];
        }

        cout<<ans+s[s.length()-1]<<endl;
    }
    return 0;
    
}