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
        vector<int>arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        
        unordered_map<int,int>mp;

        for(int x : arr){
            mp[x]++;
        }

        int ans = 0;

        for(auto x : mp){
            if(x.second == 1){
                ans = x.first;
            }
        }

        for(int i = 0;i < n;i++){
            if(arr[i] == ans){
                cout<<i+1<<endl;
                break;
            }
        }

        

    }

    
    
    return 0;

}