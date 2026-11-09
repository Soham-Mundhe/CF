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
        while(n % 2 == 0){
            n /= 2;
        }
        if(n > 1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;

}