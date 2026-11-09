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
    int n;cin>>n;

    vector<int>arr(n);

    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    int mx = *max_element(arr.begin(),arr.end());

    int ans = 0;

    for(int x : arr){
        ans += (mx - x);
    }

    cout<<ans<<endl;

    return 0;
}