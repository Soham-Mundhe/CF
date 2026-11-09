
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

        int xr = 0;

        for(int i = 0;i < n;i++){
            int x;cin>>x;

            xr ^= x;
        }

        if(n % 2 == 1) cout<<xr<<endl;

        else{
            if(xr == 0) cout<<0<<endl;
            else cout<<-1<<endl;
        }

    
    }
    return 0;
}
