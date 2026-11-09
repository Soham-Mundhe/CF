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

    int n,m;cin>>n>>m;
    
    if(min(n,m) % 2 == 0){
        cout<<"Malvika"<<endl;
    }else{
        cout<<"Akshat"<<endl;
    }

    return 0;
}