
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


    int n;cin>>n;

    int ans = 0;

    for(int i = 1;i <= n/2;i++){
        if((n - i) % i == 0) ans++;
    }

    cout<<ans<<endl;
    
    return 0;
}
