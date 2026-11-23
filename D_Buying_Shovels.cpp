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
        long long n,k;cin>>n>>k;

        long long best = 1;

        for(long long i = 1;i <= n/i;i++){
            if(n%i == 0){
                if(i <= k){
                    best = max(best,i);
                }

                long long ot = n/i;

                if(ot <= k){
                    best = max(best,ot);
                }
            }
        }

        cout<<n/best<<endl;
    }



    return 0;
}