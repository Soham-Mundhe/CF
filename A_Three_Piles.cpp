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

        if((b - a == c - b) && (c - a == 2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
