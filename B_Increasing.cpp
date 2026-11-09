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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    

    while(t--){
        int n;cin>>n;
        vector<int>arr(n);

        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }

        unordered_map<int,int>friq;

        for(int x : arr){
            friq[x]++;
        }
        bool dub = false;
        for(int x : arr){
            if(friq[x] > 1){
                dub = true;
                break;
            }
        }

        if(dub)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

        

    }


    
    
    return 0;
}