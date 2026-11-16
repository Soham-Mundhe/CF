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
        long long a,b;cin>>a>>b;
        long long xK,yK;cin>>xK>>yK;
        long long xQ,yQ;cin>>xQ>>yQ;

        set<pair<long long,long long>>king;
        set<pair<long long,long long>>queen;

        int dx[] = {1, 1, -1, -1, 1, 1, -1, -1};
        int dy[] = {1, -1, 1, -1, 1, -1, 1, -1};

        for (int i = 0; i < 8; i++) {
            long long x1 = a * dx[i];
            long long y1 = b * dy[i];

            long long x2 = b * dx[i];
            long long y2 = a * dy[i];

            king.insert({xK + x1, yK + y1});
            king.insert({xK + x2, yK + y2});

            queen.insert({xQ + x1, yQ + y1});
            queen.insert({xQ + x2, yQ + y2});
        }

        int ans = 0;

        for (auto p : king) {
            if (queen.count(p)) {
                ans++;
            }
        }

        cout << ans << endl;
    }

        


    return 0;
}
