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
        int n;cin>>n;
        string s;cin>>s;
        bool sen[26] = {false};

        bool ans = true;

        sen[s[0] - 'A'] = true; 

        for(int i = 1;i < n;i++){
            if(s[i] != s[i-1]){
                if(sen[s[i] - 'A']){
                    ans = false;
                    break;  
                }
                sen[s[i] - 'A'] = true;
            }
        }

        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    


    return 0;
}