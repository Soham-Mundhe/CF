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
        int n;cin>>n;
        
        string s;cin>>s;

        if(n != 5){
            cout<<"NO"<<endl;
            continue;
        }
        string a ="Timur";
        sort(a.begin(),a.end());
        sort(s.begin(),s.end());


        if(a == s)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
    
}