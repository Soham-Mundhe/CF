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

    int ans1 = min(a,b);
    int ans2 = (max(a,b) - ans1)/2;

    cout<<ans1<<' '<<ans2;
    return 0;
}