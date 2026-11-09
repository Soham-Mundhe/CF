#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        long long n;cin>>n;
        
        long long sum = 3;

        while(true){
            if(n % sum == 0){
                cout<<n / sum<<endl;
                break;
            }

            sum = sum * 2 + 1;
        }
    }

    return 0;
}