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
        long long n,k,x;cin>>n>>k>>x;

        long long minsum = k * (k+1)/2;

        long long maxsum = k * (2*n - k + 1) /2;

        (x >= minsum && x <= maxsum) ? cout<<"YES"<<endl : cout<<"NO"<<endl; 
    }
  

    return 0;

}