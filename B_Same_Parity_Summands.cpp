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

        if(n >= k && (n - k) % 2 == 0){
            cout<<"YES"<<endl;

            for(int i = 0;i < k-1;i++){
                cout<<1<<" ";
            }

            cout<<n - ( k - 1)<<endl;
        }else if(n >= 2*k && n % 2 == 0){
            cout<<"YES"<<endl;

            for(int i = 0;i < k -1;i++){
                cout<<2<<" ";
            }
            cout<<n - 2*(k - 1)<<endl;
        }else cout<<"NO"<<endl;
    }

    return 0;
}
