#include<iostream>
#include<vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int count = 0;
    do{
        a *= 3;
        b *= 2;
        count++;
    }while(a <= b);

    cout<<count<<endl;

    return 0;
}