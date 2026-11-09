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
    
    int t;
    cin >> t;
    while (t--) {
        int n,k;cin>>n>>k;
        vector<int>arr(n);

        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());

        int l = 0;
        int best = 1;

        for(int r = 1;r < n;r++){
            if(arr[r] - arr[r-1] > k){
                l = r;
            }

            best = max(best,r - l + 1);
        }

        cout<< n - best<<endl;
    }
    
    return 0;
}