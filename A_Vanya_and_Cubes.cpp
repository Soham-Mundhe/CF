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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;
    int sum = 0;
    
    int i = 0;
    while(sum <= n){
        int val = i*(i+1)/2;
        sum += val;
        i++;
    }
    cout<<i-2<<endl;
    
    return 0;
}