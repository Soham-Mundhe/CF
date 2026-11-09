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
    int a,b,c;
    cin>>a>>b>>c;

    int ans = max({a+b+c,a*b*c,(a+b)*c,a*(b+c),a+b*c,a*b+c});

    cout<<ans<<endl;

    return 0;

}