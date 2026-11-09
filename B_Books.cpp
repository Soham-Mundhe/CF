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
    int n,t;cin>>n>>t;

    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    int left = 0;
    long long sum = 0;
    int ans = 0;

    for(int rigth = 0;rigth < n;rigth++){
        sum += arr[rigth];

        while(sum > t){
            sum -= arr[left];
            left++;
        }
        
        ans = max(ans,rigth - left + 1);
    }

    cout<<ans<<endl;

    return 0;
}