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
        int n,k;cin>>n>>k;

        int ans = k + (k-1)/(n-1);

        cout<<ans<<endl;
      
    }
    

    return 0;
    
}