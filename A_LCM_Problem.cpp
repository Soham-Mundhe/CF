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
       int x,y;cin>>x>>y;

      2*x <= y ? cout<<x <<" "<<x*2<<endl : cout<< -1 <<" "<<-1<<endl;
    }

    
    return 0;
}