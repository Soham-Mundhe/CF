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

        if(a==b)cout<<c<<endl;
        if(a==c)cout<<b<<endl;
        if(b==c)cout<<a<<endl;
        
    }

    
    
    return 0;

}