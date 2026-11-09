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
    string s;cin>>s;
    int n = s.size();

    vector<int>pre(n+1,0);

    for(int i = 1;i < n;i++){
        if(s[i] == s[i-1]){
            pre[i+1] = pre[i] + 1;
        }else{
            pre[i+1] = pre[i];
        }
    }

    int m;cin>>m;

    while(m--){
        int l,r;cin>>l>>r;

        cout<<pre[r] - pre[l]<<endl;
    }
    
    return 0;
}