
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

    int n;cin>>n;

    vector<int>arr(12);
    int sum = 0;

    for(int i = 0;i < 12;i++){
        cin>>arr[i];
        sum += arr[i];
    }

    if(n == 0){
        cout<<0<<endl;
        return 0;
    }

    if(sum < n) {
        cout<<-1<<endl;
        return 0;
    }

    sort(arr.rbegin(),arr.rend());
    int ans = 0;
    int gr = 0;


    for(int i = 0;i < 12;i++){
        gr += arr[i];
        ans++;

        if(gr >= n){
            break;
        }
    }

    cout<<ans<<endl;

    return 0;
}
