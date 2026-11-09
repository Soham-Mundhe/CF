
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
        string s;cin>>s;

        string part = s.substr(0,2);
        int num = stoi(part);

        if(num == 0) cout<<"12"<<s.substr(2)<<" AM";
        else if(num < 12) cout<<s<<" AM";
        else if(num == 12) cout<<s<<" PM";
        else {
            num -= 12;
            if(num < 10)cout<<"0";
            cout<<num<<s.substr(2)<<" PM";
        }

        cout<<endl;
    }

    return 0;
}
