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
       
        int ans = 0;

        for(int i = 1;i <= 9;i++){
            int num = 0;

            for(int j = 1;j <= 9;j++){
                num = num * 10 + i;

                if(num <= n) ans++;
            }
        }

        cout<<ans<<endl;
    }

    
    return 0;
}