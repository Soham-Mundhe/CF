#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main(){
    long long n ;
    cin>>n;

    if(n % 2 == 0)cout<<(long long)(n/2)<<endl;
    else cout<<(long long)(-(n+1)/2)<<endl;
    
    return 0;
}