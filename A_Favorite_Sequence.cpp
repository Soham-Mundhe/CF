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
        int n;cin>>n;
        vector<int>arr(n);

        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }

        int l = 0,r = n-1;

        while(l <= r){
            cout<<arr[l]<<" ";
            l++;

            if(l <= r){
                cout<<arr[r]<<" ";
                r--;
            }
        }
        cout<<endl;


    }

    
    return 0;
}