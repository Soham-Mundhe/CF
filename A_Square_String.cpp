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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;

    while(t--){
       

        string s;cin>>s;
        
        if(s.length() % 2 != 0){
            cout<<"NO"<<endl;
            continue;
        }


        string s1 = s.substr(0,s.length()/2);
        string s2 = s.substr(s.length()/2,s.length());

        if(s1 == s2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }


    
    
    return 0;
}