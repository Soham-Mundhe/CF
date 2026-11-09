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
        int n;cin>>n;
        vector<int>arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int>freq;

        for(int x : arr){
            freq[x]++;
        }

        int ans = -1;
        for(auto &x : freq){
            if(x.second >= 3){
                ans = x.first;
                break;
            }
        }

        cout<<ans<<endl;

    }
    

    return 0;
}