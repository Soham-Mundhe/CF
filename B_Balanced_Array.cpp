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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;

        if(n % 4 != 0){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;

        int even = 0,odd = 0;


        for(int i = 2;i <= n;i+=2){
            cout<<i<<' ';
            even += i;
        }

        for(int i = 1;i < n-1;i+=2){
            cout<<i<<' ';
            odd += i;
        }

        cout<<even - odd<<endl;
    }
    
    return 0;
}