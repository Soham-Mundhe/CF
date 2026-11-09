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
        int a,b,c;cin>>a>>b>>c;

        if(a+b >= 10){
            cout<<"YES"<<endl;
            continue;
        }
        if(b + c >= 10){
            cout<<"YES"<<endl;
            continue;
        } 
        if(a + c >= 10){
            cout<<"YES"<<endl;
            continue;
        }

        cout<<"NO"<<endl;
        
    }

    return 0;
    
}