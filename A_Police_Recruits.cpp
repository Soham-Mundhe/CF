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

    int avlP = 0;
    int untrC = 0;

    for(int i : arr){
        if(i > 0 ){
            avlP += i;
        }else{
            if(avlP > 0){
                avlP--;
            }else{
                untrC++;
            }
        }
    }

    cout<<untrC<<endl;

}