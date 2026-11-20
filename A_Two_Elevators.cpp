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
        int a,b,c;cin>>a>>b>>c;

        int t1 = abs(a - 1);
        int t2 = abs(b - c) + abs(c - 1);

        if(t1 < t2) cout<<1<<endl;
        else if(t2 < t1) cout<<2<<endl;
        else cout<<3<<endl;
    }
    


    return 0;
}
