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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;

    while(t--){
        int n,m;cin>>n>>m;

        string x,s;cin>>x>>s;

        int ans = -1;

        for(int i = 0;i <= 6;i++){
            if(x.find(s) != string::npos){
                ans = i;
                break;

            }
            x += x;
        }

        cout<<ans<<endl;

    }
    
    return 0;
}