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
    int T;
    cin >> T;

    while (T--) {
        int n,k;cin>>n>>k;

        vector<int>a(n);
        vector<int>b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i = 0;
        int j = n-1;
        while(k-- && i < n && j >= 0){
            if(a[i] < b[j]){
                swap(a[i],b[j]);
                i++;j--;
            }else break;
        }
        int sum = 0;
        for(int x : a){
            sum += x;
        }

        
        cout<<sum<<endl;
    }

    return 0;
}