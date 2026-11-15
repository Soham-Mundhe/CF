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
        long long x,y;cin>>x>>y;

        long long a,b;cin>>a>>b;

        long long mn = min(x,y);
        long long diff = abs(x - y);

        long long ans = mn * min(2*a,b) + diff*a;

        cout<<ans<<endl;
    }

    return 0;
}
