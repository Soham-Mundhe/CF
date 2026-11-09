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
using namespace std;

int main(){
    int n ;cin>>n;
    int count = 0;
    while(n > 0){
        if(n >= 100){
            n -= 100;
            count++;
        }else if(n >=20 && n < 100){
            n -= 20;
            count++;
        }else if(n >= 10 && n < 20){
            n -= 10;
            count++;
        }else if(n >= 5 && n < 10){
            n -= 5;
            count++;
        }else if(n >= 1 && n < 5){
            n-=1;
            count++;
        }
    }

    cout<<count<<endl;

    return 0;

}