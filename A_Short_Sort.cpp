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

        if(s == "abc")cout<<"YES"<<endl;
        if(s == "acb")cout<<"YES"<<endl;
        if(s == "bac")cout<<"YES"<<endl;
        if(s == "bca")cout<<"NO"<<endl;
        if(s == "cab")cout<<"NO"<<endl;
        if(s == "cba")cout<<"YES"<<endl;
    }
    

    return 0;
    
}