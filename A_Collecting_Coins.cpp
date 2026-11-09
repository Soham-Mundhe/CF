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

        long long a,b,c,n;cin>>a>>b>>c>>n;

        if((a + b + c + n) % 3 != 0){
            cout<<"NO"<<endl;
            continue;
        }

        if((a + b + c + n) / 3 >= max({a,b,c})){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;

    }

    return 0;
}