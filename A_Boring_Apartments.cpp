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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    vector<int>arr = {1,3,6,10};

    while(t--){
       string s;cin>>s;

       int ans = ((s[0] - '0') - 1) * 10 + arr[s.size()-1];
       cout<<ans<<endl;

    }


    
    
    return 0;
}