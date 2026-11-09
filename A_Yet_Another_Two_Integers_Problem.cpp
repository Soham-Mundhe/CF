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
        int a,b;cin>>a>>b;
        int dif = abs(a-b);

        cout<<(dif + 9)/10 <<endl;
    }

    
    
    return 0;

}