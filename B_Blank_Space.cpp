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
        int ans = INT_MIN;
        int count = 0;

        for(int x : arr){
            
            if(x == 0){
                count++;
                ans = max(ans,count);
            }else{
                count = 0;
            }
        }

        ans = max(ans,count);

        cout<<ans<<endl;
    }

    
    
    return 0;

}