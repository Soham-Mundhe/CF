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
        string s;
        cin >> s;

        string a = s;
        reverse(a.begin(), a.end());

        if (a != s) {
            cout << "YES\n";
            cout << a << '\n';
        }
        else {
            sort(a.begin(), a.end());

            if (a == s) {
                cout << "NO\n";
            }
            else {
                cout << "YES\n";
                cout << a << '\n';
            }
        }
        
    }



    return 0;
}