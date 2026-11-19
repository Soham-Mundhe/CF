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
        long long m,a,b,c;cin>>m>>a>>b>>c;

        long long ans = min(a,m) + min(b,m) + min(c,2*m - min(a,m) - min(b,m));

        cout<<ans<<endl;
    }
    

        


    return 0;
}
