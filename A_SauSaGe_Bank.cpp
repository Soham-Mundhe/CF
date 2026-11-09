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
        long long n,k;cin>>n>>k;
        
        long long ans = 2 * (k  -1);

        long long power = 1;

        for(int i = 0;i < n- k + 1;i++){
            power *= 2;
        }

        ans += power;

        cout<<ans<<endl;
    }
  

    return 0;

}