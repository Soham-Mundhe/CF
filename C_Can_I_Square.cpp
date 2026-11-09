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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;cin>>t;

    while(t--){
        int n;cin>>n;

        int root = 0;
        long long sum = 0;
        for(int i = 0;i < n;i++){
            long long x;cin>>x;
            sum += x;

            root = sqrt(sum);

        }

        // if(root*root == sum) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;

        1LL*root*root == sum ?  cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}