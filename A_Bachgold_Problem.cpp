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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;cin>>n;
    int ans = 0;
    if(n % 2 == 0){
        cout<<n / 2<<endl;
        for(int i = 0;i < n/2;i++){
            cout<<2<<" ";
        }
        cout<<endl;
    }else{
        cout<<n/2<<endl;

        cout<<3<<" ";

        for(int i = 1;i < (n-3)/2 + 1;i++){
            cout<<2<<" ";
        }
        cout<<endl;

    }

    return 0;
}