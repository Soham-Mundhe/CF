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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int x,y,n;cin>>x>>y>>n;

        // for(int i = n;i >= 0;i--){
        //     if(i % x == y){
        //         cout<<i<<endl;
        //         break;
        //     }
        // }

        cout<< n - (n - y)%x<<endl;
    }
    
    return 0;
}