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
    int s,n;cin>>s>>n;

    vector<pair<int,int>>arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i].first>>arr[i].second;
    }

    sort(arr.begin(),arr.end());

    for(int i = 0;i < n;i++){
        if(arr[i].first >= s){
            cout<<"NO"<<endl;
            return 0;
        }else{
            s += arr[i].second;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}