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
        int n;cin>>n;
        
        unordered_map<int,long long>mp;

        long long ans = 0;

        for(int i = 1;i <= n;i++){
            int x;cin>>x;

            int val = x - i;

            ans += mp[val];

            mp[val]++;
        }

        cout<<ans<<endl;

        
    }

    return 0;
    
}