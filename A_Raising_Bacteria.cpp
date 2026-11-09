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
    int n;cin>>n;

    // int ans = 0;

    // while(n){
    //     ans += (n & 1);
    //     n >>= 1;
    // }

    // cout<<ans<<endl;

    cout<<__builtin_popcount(n)<<endl;


    return 0;
}