
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

        long long sumsec = 0;
        long long minfirst = LLONG_MAX;
        long long minsec = LLONG_MAX;

        for(int i = 0;i < n;i++){
            int m;cin>>m;

            long long mn1 = LLONG_MAX;
            long long mn2 = LLONG_MAX;

            for(int j = 0;j < m;j++){
                long long x;cin>>x;

                if(x < mn1){
                    mn2 = mn1;
                    mn1 = x;
                }else if(x < mn2){
                    mn2 = x;
                }
            }

            sumsec += mn2;
            minfirst = min(minfirst,mn1);
            minsec = min(minsec,mn2);
        }

        long long ans = sumsec - minsec + minfirst;

        cout<<ans<<endl;
    }

    return 0;
}
