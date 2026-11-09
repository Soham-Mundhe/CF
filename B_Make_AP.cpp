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
#include <cmath>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a,b,c;cin>>a>>b>>c;
        bool ans = false;
        if((2*b - c) > 0 && (2*b - c) % a == 0){
            ans = true;
        } 

        else if((a + c) % (2*b) == 0){
            ans = true;
        }

        else if((2*b - a) > 0 && (2*b - a) % c == 0){
            ans = true;
        }

        cout << (ans ? "YES" : "NO") << endl;
        

    }

    return 0;
}