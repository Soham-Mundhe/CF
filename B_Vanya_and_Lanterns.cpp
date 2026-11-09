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
    int n,l;cin>>n>>l;

    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }


    sort(arr.begin(),arr.end());

    double ans  = arr[0];
    ans  = max(ans,(double)(l - arr[n-1]));
    
    for(int i = 0;i <= n-2;i++){
        ans = max(ans,(arr[i+1]-arr[i])/2.0);
    }

    cout << fixed << setprecision(10) << ans << endl;

    return 0;

}