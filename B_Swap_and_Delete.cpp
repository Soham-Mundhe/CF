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
        string s;cin>>s;

        int z = count(s.begin(),s.end(),'0');
        int o = s.size() - z;
        int ans = 0;
        for(char ch : s){
            if(ch == '0'){
                if(o == 0) break;
                o--;
            }else{
                if(z == 0) break;
                z--;
            }
            ans++;
        }

        cout<<s.size() - ans<<endl;

    }

    return 0;
}