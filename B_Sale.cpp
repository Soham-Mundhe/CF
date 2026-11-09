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

    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    int ans = 0 ;
    for(int i = 0;i < m;i++){
        if(arr[i] < 0){
            ans += arr[i];
        }
        else break;
    }

    cout<<-ans<<endl;

    return 0;
    
}