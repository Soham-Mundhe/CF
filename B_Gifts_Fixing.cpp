
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
        int n;cin>>n;

        vector<long long>a(n),b(n);

        for(int i = 0;i < n;i++){
            cin>>a[i];
        }

        
        for(int i = 0;i < n;i++){
            cin>>b[i];
        }

        long long mia = *min_element(a.begin(),a.end());
        long long mib = *min_element(b.begin(),b.end());
        long long ans = 0;
        for(int i = 0;i < n;i++){
            long long da = a[i] - mia;
            long long db = b[i] - mib;

            ans += max(da,db);
        }

        cout<<ans<<endl;
    }

    return 0;
}
