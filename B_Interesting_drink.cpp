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
    sort(arr.begin(),arr.end());

    int q;cin>>q;
    while(q--){
        int m;cin>>m;
    
        cout<<upper_bound(arr.begin(),arr.end(),m) - arr.begin()<<endl;
    }
    return 0;

}