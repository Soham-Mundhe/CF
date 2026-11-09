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
    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        vector<int>arr(n);

        for(int i = 0;i < n;i++){
            for(int j = 0;j < 4;j++){
                char x;cin>>x;
                if(x == '#') arr[i] = j+1;
            }
        }

        reverse(arr.begin(),arr.end());

        for(int x : arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}