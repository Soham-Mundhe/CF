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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        
        int odd = 0;
        int mod0 = 0;
        int mod2 = 0;

        for(int i = 0;i < n;i++){
            long long x;
            cin>>x;
            if(x % 2==1){
                odd++;
            }else if(x % 4 == 0){
                mod0++;
            }else{
                mod2++;
            }
        }

        cout<<max({odd,mod0,mod2})<<endl;

    }
    return 0;
}