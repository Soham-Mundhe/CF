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

int main(){
    int t;cin>>t;

    while(t--){
        string s;cin>>s;
        string Q = "codeforces";

        if(Q.find(s) != string::npos) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;

}