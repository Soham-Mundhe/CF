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
        long long n;cin>>n;

        int ans = 0;

        while(n != 1){
            // if(n == 1){
            //     cout<<ans<<endl;
            //     break;
            // }

            if(n % 6 == 0){
                n /= 6;
                
            }else if(n % 3 == 0){
                n *= 2;
                
            }else{
               ans = -1;
               break;
            }
            ans++;
        }

        cout<<ans<<endl;
        
    }

    return 0;
    
}