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

   
    
    int n,k;cin>>n>>k;

    vector<int>arr(n);

    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    if(k == 0){
        if(arr[0] == 1) cout<<-1<<endl;
        else{
            cout<<arr[0] -1<<endl;
        }
    }else{
        int x = arr[k - 1];

        if(k < n && arr[k] == x){
            cout<<-1<<endl;
        }else{
            cout<<x<<endl;
        }

    }
    return 0;
}



   
