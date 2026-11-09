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
    int n,k;cin>>n>>k;

    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    for(int& x : arr){
        x = x+k;
    }

    int count = 0;

    for(int x : arr){
        if(x <= 5)count++;
    }

    cout<<count/3<<endl;

    return 0;
    
}