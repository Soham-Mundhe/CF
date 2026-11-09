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
#include <cmath>
using namespace std;

bool isprime(long long n){
    if(n < 2) return false;

    for(int i = 2;i*i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}
int main(){
    int n;cin>>n;

    while(n--){
        long long x;cin>>x;

        long long rot = sqrt(x);

        if(rot * rot == x && isprime(rot)){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
    
    return 0;
}