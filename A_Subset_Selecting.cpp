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
        int n,k;cin>>n>>k;
        
        vector<int>a(n);
        vector<int>freq(n + 1,0);

        for(int i = 0;i < n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }

        int ans = 0;
        int avb = 0;

        for(int i = 0;i <= n;i++){
            avb += freq[i];

            if(freq[i] == 0 || avb < k){
                break;
            }

            ans++;
            avb -= k;
        }

        cout<<ans<<endl;
        
    }

    
    return 0;
}