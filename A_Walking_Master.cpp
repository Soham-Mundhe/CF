
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

    int t;cin>>t;

    while(t--){
        int a,b,c,d;cin>>a>>b>>c>>d;

        if(d < b) {
            cout<<-1<<endl;
            continue;
        }

        long long up = d - b;
        long long x = a + up;

        x < c ? cout<<-1<<endl : cout<<up +(x - c)<<endl;



        
    }

    return 0;
}
