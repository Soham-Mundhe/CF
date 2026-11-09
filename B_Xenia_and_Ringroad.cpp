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
    int cur = 1;
    long long ans = 0;

    for(int i = 0;i < m;i++){
        if(arr[i] >= cur){
            ans += arr[i] - cur;
            cur = arr[i];
        }else{
            ans += (n - cur) + arr[i];
            cur = arr[i];
        }
    }

    cout<<ans<<endl;

    return 0;

}