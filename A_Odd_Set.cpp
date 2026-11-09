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
        int n;cin>>n;
        int cnt = 0;
        for(int i = 0;i < 2*n;i++){
            int x;cin>>x;
            if(x % 2 == 1) cnt++;
        }
        

        cnt == n ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    }
    return 0;
}