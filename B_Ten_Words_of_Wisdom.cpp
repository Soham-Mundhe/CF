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

int main(){
    int t;cin>>t;

    while(t--){
        int n;cin>>n;

        int bestQ = -1;
        int winner = -1;

        for(int i = 1;i <= n;i++){
            int a,b;
            cin>>a>>b;

            if(a <= 10 && b > bestQ){
                bestQ = b;
                winner = i;
            }
        }

        cout<<winner<<endl;
    }

    
    return 0;
}