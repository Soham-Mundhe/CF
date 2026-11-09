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
    int k,r;cin>>k>>r;
    int i = 1;
    while(k != 0){
        int n = k;
        if((i * n) % 10 == 0){
            cout<<i<<endl;
            break;
        }else if(((i * n) % 10) - r == 0){
            cout<<i<<endl;
            break;
        }
        i++;
    }
    

    

    return 0;

}