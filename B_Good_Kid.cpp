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
        int n;cin>>n;

        vector<int>arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());

        arr[0] = arr[0] + 1;

        int ans = 1;

        for(int x : arr){
            ans *= x;
        }

        cout<<ans<<endl;

    }


    
    
    return 0;
}