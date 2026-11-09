
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

        int odd = 0,even = 0;

        for(int i = 0;i < n;i++){
            int x;cin>>x;

            if(x % 2== 0) even++;
            else odd++;


        }

        odd % 2 == 1 || (even > 0 && odd > 0) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}
