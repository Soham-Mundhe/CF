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

    while(n--){
        int t;cin>>t;

        if(t % 3 >= 1){
            cout<<"First"<<endl;
        }else if(t % 3 == 0){
            cout<<"Second"<<endl;
        }
    }

}