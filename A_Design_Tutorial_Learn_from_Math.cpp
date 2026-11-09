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
bool isprime(int n){
    for(int i = 2;i*i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;cin>>n;
    vector<int>arr = {4,6,8,9,10,12};

    for(int x : arr){
        if(!isprime(n-x)){
            cout<<n-x<<' '<<x<<endl;
            return 0;
        }
    }

    

    return 0;
    
}