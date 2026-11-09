
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
        int n;cin>>n;

        vector<int>arr(n);

        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        int cnt = 0;
        for(int i = 0;i < n-1;i++){
            if(arr[i] % 2 == arr[i + 1] % 2) cnt++;
        }

        cout<<cnt<<endl;
        
    }

    return 0;
}
