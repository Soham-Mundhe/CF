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

    vector<int>arr(n + 1,0);

    for(int i = 2;i <= n;i++){
        if(arr[i] == 0){
            for(int j = i;j <= n;j += i){
                arr[j]++;
            }
        }
    }
    
    int ans = 0;

    for(int i = 2;i <=n;i++){
        if(arr[i] == 2){
            ans++;
        }
    }

    cout<<ans<<endl;


    return 0;
}
