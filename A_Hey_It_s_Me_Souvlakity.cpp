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
        string s;cin>>s;

        int mi = -1;
        int mx = -1;

        for(int i = 0;i < n;i++){
            if(s[i] == '1'){
                if(mi == -1) mi = i+1;

                mx = i+1;
            }
        }

        cout<<mx - mi<<endl;
    }
   
    return 0;
}