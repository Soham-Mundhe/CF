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

        bool so = true;

        for(int i = 0;i < n-1;i++){
            if(arr[i] > arr[i+1]){
                so = false;
                break;
            }
        }

        if(!so) {
            cout<<0<<endl;
            continue;
        }

        long long ans = 1e18;

        for(int i = 0;i < n-1;i++){
            long long gap = arr[i+1] - arr[i];
            long long op = gap/2 + 1;

            ans = min(ans,op);

        }

        cout<<ans<<endl;
    }
  

    return 0;

}