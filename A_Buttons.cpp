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
        int a,b,c;cin>>a>>b>>c;

        int anna = a + (c + 1)/2;
        int kati = b + (c/2);

        if(anna > kati)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }

    return 0;
    
}