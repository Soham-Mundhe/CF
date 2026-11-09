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

    vector<int>arr;

    int num = 1;

    while(arr.size() < 1000){
        if(num % 3 != 0 && num % 10 != 3){
            arr.push_back(num);

        }

        num++;
    }

    while(t--){
        int k ;cin>>k;

        cout<<arr[k-1]<<endl;
    }

    return 0;
    
}