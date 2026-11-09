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

    int t;
    cin >> t;

    while (t--) {

        int n,q;cin>>n>>q;

        vector<long long>pre(n + 1,0);

        long long total = 0;

        for(int i = 1;i <= n;i++){
            int x;cin>>x;

            pre[i] += pre[i-1] + x;
            total += x;
        }

        while(q--){
            int l,r;cin>>l>>r;

            long long k;
            cin>>k;

            long long rengesum = pre[r] - pre[l-1];

            long long len = r - l + 1;

            long long newsum = total - rengesum + len*k;

            newsum % 2 == 0 ? cout<<"NO"<<endl : cout<<"YES"<<endl;
        }
    }

    return 0;
}