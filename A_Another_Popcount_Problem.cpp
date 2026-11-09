#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <iomanip>
#include <queue>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--){
        long long n,k;
        
        cin>>n>>k;

        priority_queue<long long,vector<long long>,greater<long long>>pq;
        
        long long rem = n;
        long long av = min(rem,k);
        long long ans = av;

        rem -= av;

        long long cost = 2;

        while(av > 0 && rem >= cost){
            long long bay = min(av,rem/cost);
            ans += bay;
            rem -= bay*cost;
            av = bay;
            cost<<=1;
        }

        cout<<ans<<endl;
    }

    return 0;
}