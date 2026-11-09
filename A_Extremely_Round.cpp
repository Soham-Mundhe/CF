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
    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        int ans = 0;
        int p = 1;

        while(p <= n){
            ans += min(9,n/p);
            p *= 10;
        }   

        cout<<ans<<endl;
    }
    return 0;
}