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

   
    while (t--) {
        int a;cin>>a;

        (360 % (180 - a) == 0) && (360/(180 - a) >= 3) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
   
    return 0;
}