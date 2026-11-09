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
    int T;
    cin >> T;

    while (T--) {
        int n;cin>>n;

        int o = 0;
        int t = 0;

        for(int i = 0;i < n;i++){
            int x;
            cin>>x;

            if(x == 1)o++;
            else t++;
        }

        if(o % 2 != 0){
            cout<<"NO"<<endl;
        }else if(o == 0 && t % 2 != 0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
    }

    return 0;
}