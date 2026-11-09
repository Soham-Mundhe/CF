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
    int n;cin>>n;
    
    while(n--){
        int a,b;
        cin>>a>>b;

        if(a % b == 0){
           cout<< 0 <<endl;
        }else {
            cout<<b - (a%b)<<endl;
        }
    }


    return 0;
}