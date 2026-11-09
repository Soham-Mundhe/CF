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
    int t;cin>>t;

    while(t--){
        int n,a,b;cin>>n>>a>>b;
        int A = a*2;
        if(n == 1) cout<<a<<endl;

        else if(n % 2 == 0){
            if(A > b){
                cout<<(n/2) * b<<endl;
            }else{
                cout<<(n/2) * A<<endl;
            }
        }else{
            if(A > b){
                cout<<((n/2) * b) + a<<endl;
            }else{
                cout<<((n/2) * A) + a<<endl;
            }
        }
    }
    return 0;
}