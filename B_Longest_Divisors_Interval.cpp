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
        long long n;cin>>n;

        long long x = 1;

        while(n % x == 0){
            x++;
        }

        cout<<x - 1<<endl;
    }

    
    return 0;
}