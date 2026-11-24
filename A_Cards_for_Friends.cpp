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

   
    int t;cin>>t;

    while(t--){
        int w,h,n;cin>>w>>h>>n;
        long long ans = 1;

        while(w % 2 == 0){
            ans *= 2;
            w /= 2;
        }

        while(h % 2 == 0){
            ans *= 2;
            h /= 2;
        }



        ans >= n ?cout<<"YES"<<endl : cout<<"NO"<<endl;
    }



    return 0;
}