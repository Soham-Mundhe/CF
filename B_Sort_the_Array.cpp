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

    int n;cin>>n;
    vector<int>arr(n);

    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    vector<int>b = arr;

    sort(b.begin(),b.end());
    int l = 0,r = n-1;
    while(l < n && arr[l] == b[l]){
        l++;
    }

    if(l == n){
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }
    
    while(r >= 0 && arr[r] == b[r]){
        r--;
    }

    reverse(arr.begin() + l,arr.begin() + r + 1);

    if(arr == b) {
        cout<<"yes"<<endl;
        cout<<l + 1 <<" "<<r +1<<endl;
    }else cout<<"no"<<endl;


    return 0;
}