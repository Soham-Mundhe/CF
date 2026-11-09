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
        unordered_map<char,int>mp;

        for(int i = 0;i < 3;i++){
            for(int j = 0;j < 3;j++){
                char x;cin>>x;
                mp[x]++;
            }
        }

        for(auto x : mp){
            if(x.second == 2)cout<<x.first<<endl;
        }
    }

    
    return 0;
}