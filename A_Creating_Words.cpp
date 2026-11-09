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
        string a,b;cin>>a>>b;

        swap(a[0],b[0]);

        cout<<a<<' '<<b<<endl;
    }

    return 0;
    
}