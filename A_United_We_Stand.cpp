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

        int n;cin>>n;
        vector<int>arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }

        int mn = *min_element(arr.begin(),arr.end());

        vector<int>b;
        vector<int>c;

        for(int x : arr){
            if(x == mn)
                b.push_back(x);
            else{
                c.push_back(x);
            }
        }

        if(c.empty()){
            cout<<-1<<endl;
            continue;
        }

        cout<<b.size()<<" "<<c.size()<<endl;

        for(int x : b){
            cout<<x<<" ";
        }
        cout<<endl;
        
        for(int x : c){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}