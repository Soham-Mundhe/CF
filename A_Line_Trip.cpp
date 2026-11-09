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
        int n,x;cin>>n>>x;
        vector<int>arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }

        vector<int>maxi;

        int a = 0;
        for(int i = 0;i < n;i++){
            maxi.push_back(arr[i] - a);
            a = arr[i];
        }

        int mx = *max_element(maxi.begin(),maxi.end());

        cout<<max(mx,(x - arr[n-1])*2)<<endl;
    }


    return 0;
}