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
    int a,b;cin>>a>>b;

    int mx = max(a,b);

    int ans = 7-mx;
    int de = 6;

    int g = __gcd(ans,de);

    cout<<ans / g <<"/"<<de / g<<endl;

    return 0;
    
}