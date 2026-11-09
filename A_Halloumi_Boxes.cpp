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
    int t;cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }

        if(k > 1)cout<<"YES"<<endl;
        else{
            if(is_sorted(arr.begin(),arr.end()))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;

}