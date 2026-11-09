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
    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        int neg = 0;

        for(int i = 0;i < n;i++){
            int x;cin>>x;

            if(x == -1) neg++;
        }

        int ans = 0;

        while(neg > n/2 ){
            neg--;
            ans++;
        }

        if(neg % 2 != 0){
            neg--;
            ans++;
        }

        cout<<ans<<endl;

    }
    return 0;
}