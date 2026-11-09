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
    int n;cin>>n;

    while(n--){
        string s;cin>>s;
        for(char& ch : s){
            ch = tolower(ch);
        }

        if(s == "yes"){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }

    
    return 0;
}