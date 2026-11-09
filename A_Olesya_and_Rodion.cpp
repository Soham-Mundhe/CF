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
    int n,t;cin>>n>>t;

    if(t == 10){
        if(n == 1){
            cout<<-1<<endl;
        }else{
            cout<<1;
            for(int i = 1;i < n-1;i++){
                cout<<0;
            }
            cout<<0<<endl;
        }

    }else{
        cout<<t;
        for(int i = 1;i < n;i++){
            cout<<0;
        }
        cout<<endl;
    }

    return 0;
}