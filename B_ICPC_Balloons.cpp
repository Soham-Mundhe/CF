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

        string s;cin>>s;

        vector<int>freq(26,0);

        for(char ch : s){
            freq[ch - 'A']++;
        }

        int ans = 0;

        for(int i = 0;i < 26;i++){
            if(freq[i] != 0){
                ans += (freq[i] + 1);
            }
        }

        cout<<ans<<endl;

    }

    return 0;
    
}