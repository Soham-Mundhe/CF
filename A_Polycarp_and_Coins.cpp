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
        long long n;cin>>n;
        long long c2 = (n+1)/3;
        long long c1 = n -2*c2;
        
        cout<<c1 <<" "<<c2<<endl;
    }

    return 0;
}