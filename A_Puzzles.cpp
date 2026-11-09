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
    int n,m;cin>>n>>m;

    vector<int>arr(m);
    for(int i = 0;i < m;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    int ans = INT_MAX;

    for(int i = 0;i <= arr.size()- n;i++){
        
        int mx = INT_MIN;
        int mi = INT_MAX;

        for(int j = i; j < i + n;j++){
            mx = max(mx,arr[j]);
            mi = min(mi,arr[j]);
        }

        ans = min(ans,mx - mi);

    }


    

    cout<<ans<<endl;

}