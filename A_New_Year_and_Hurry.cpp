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
    // int sum = 0;
    
    // int i = 1;
    // while(sum < 240-k){
    //     sum += 5*i;
    //     i++;
    // }

    // cout<<i<<endl;

    int cnt = 0;
    int sum = 0;
    for(int i = 1;i <= n;i++){
        if(sum + i*5 <= 240-k){
            sum += i*5;
            cnt++;
        }else{
            break;
        }
    }

    cout<<cnt<<endl;

    return 0;

}