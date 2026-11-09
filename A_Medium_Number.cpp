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
        if(a < b && a > c)cout<<a<<endl;
        if(b < a && b > c)cout<<b<<endl;
        if(c < a && c > b)cout<<c<<endl;
        if(a < c && a > b)cout<<a<<endl;
        if(b < c && b > a)cout<<b<<endl;
        if(c < b && c > a)cout<<c<<endl;
        
    }

    
    
    return 0;

}