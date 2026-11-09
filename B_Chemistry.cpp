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

    while(t--){
        int n,k;cin>>n>>k;

        string s;cin>>s;

        vector<int>arr(26,0);

        for(char ch : s){
            arr[ch - 'a']++;
        }

        int odd = 0;

        for(int i = 0;i < 26;i++){
            if(arr[i] % 2 == 1){
                odd++;
            }
        }

        if(odd <= k +1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }


    
    
    return 0;
}