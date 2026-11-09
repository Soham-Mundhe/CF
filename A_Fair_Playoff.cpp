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
        int a,b,c,d;cin>>a>>b>>c>>d;

        int w1 = max(a,b);
        int w2 = max(c,d);

        int mx = max({a,b,c,d}) ;

        int mx2 = 0;

        if(mx != a) mx2 = max(mx2,a);
        if(mx != b) mx2 = max(mx2,b);
        if(mx != c) mx2 = max(mx2,c);
        if(mx != d) mx2 = max(mx2,d);

        if((w1 == mx && w2 == mx2) || (w1 == mx2 && w2 == mx)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        
    }
    return 0;
}