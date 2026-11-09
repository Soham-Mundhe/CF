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

    vector<int>arr(n);

    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    int best = arr[0];
    int worst = arr[0];
    int count = 0;

    for(int x : arr){
        if(x > best){
            count++;
            best = x;
        }else if(x < worst){
            count++;
            worst = x;
        }
    }



    
    cout<<count<<endl;

    return 0;

}