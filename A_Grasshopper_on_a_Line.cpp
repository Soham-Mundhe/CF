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
    int T;
    cin >> T;

    while (T--) {
        int x,k;cin>>x>>k;

        if(x % k != 0){
            cout<<1<<endl;
            cout<<x<<endl;
        }else{
            cout<<2<<endl;
            cout<<1<<" "<<x-1<<endl;
        }
       
    }

    return 0;
}