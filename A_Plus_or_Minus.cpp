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

        // if(a+b == c)cout<<'+'<<endl;
        // else if(a - b == c)cout<<'-'<<endl;

        (a + b == c) ? cout<<'+'<<endl :cout<<'-'<<endl; 
    }



    
    return 0;




}