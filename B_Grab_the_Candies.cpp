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
       
        int odd = 0,ev = 0;

        for(int i = 0;i < n;i++){
            int x;cin>>x;

            if(x % 2 == 0) ev += x;
            else odd += x;
        }

        ev > odd ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    
    return 0;
}