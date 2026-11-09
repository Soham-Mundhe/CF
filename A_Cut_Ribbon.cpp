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
    int n,a,b,c;cin>>n>>a>>b>>c;
    int ans = 0;

    for(int i = 0;i <= n/a;i++){
        for(int j = 0;j <= n/b;j++){

            int rem = n - i*a - j*b;

            if(rem < 0)
                continue;

            if(rem % c == 0){
                int k = rem/c;

                ans = max(ans,i + j + k);
            }
        }
    }

    cout<<ans<<endl;
    return 0;

}