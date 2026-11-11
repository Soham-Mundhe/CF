
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
        int n,k;cin>>n>>k;

        if(n >= 1LL*k*k && n%2 == k%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
