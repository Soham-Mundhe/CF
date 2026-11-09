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
        int n;cin>>n;
        string s;cin>>s;

        int dots = 0;
        bool tdots = false;

        for(int i = 0;i < n;i++){
            if(s[i] == '.'){
                dots++;
            }

            if(i >= 2 && s[i] == '.' && s[i-1] == '.' && s[i-2] == '.') tdots = true;
        }

        if(tdots) cout<<2<<endl;
        else cout<<dots<<endl;
    }
    return 0;
}