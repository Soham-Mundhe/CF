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
#include <map>
using namespace std;


int main() {

    int t;
    cin >> t;

    while (t--) {

        int n,k;
        cin >> n >> k;

        vector<long long>arr(n);

        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }

        long long ans = 0;

        int p = min(k - 1,n - k + 1);

        for(int i = 0;i < p;i++){
            ans += max(arr[i],arr[n - 1 - i]);
        }

        if(n >= 2 * k -1){
            for(int i = k-1;i <= n-k;i++){
                ans += arr[i];
            }
        }

        cout<<ans<<endl;

       
    }

    return 0;
}