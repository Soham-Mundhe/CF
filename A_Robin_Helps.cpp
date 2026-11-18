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
        int n,k;cin>>n>>k;
        vector<int>arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        int ans = 0;
        int mon = 0;
        for(int i = 0;i < n;i++){
            if(arr[i] == 0 && mon  == 0)ans+=0;
            else if(mon != 0 && arr[i] == 0 ){
                ans++;
                mon--;
            }else if(arr[i] >= k) mon+=arr[i];
        }

        cout<<ans<<endl;
    }

        


    return 0;
}
