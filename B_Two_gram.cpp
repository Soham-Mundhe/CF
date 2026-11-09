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
   
    int n;cin>>n;

    string s;cin>>s;

    unordered_map<string,int>mp;

    for(int i = 0;i < n-1;i++){
        string temp = s.substr(i,2);
        mp[temp]++;
    }

    string ans;
    int mx = 0;

    for(auto x : mp){
        if(x.second > mx){
            mx = x.second;
            ans = x.first;
        }
    }

    cout<<ans<<endl;
   
    return 0;
}