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
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    int count = 0;

    for(int i = 1;i <=d;i++){
        if(i % k == 0 || i % l == 0||i % m == 0||i % n == 0){
            count++;
        }
    }

    cout<<count<<endl;

}