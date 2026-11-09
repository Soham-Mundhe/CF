#include<iostream>
using namespace std;

int main(){
    int n,m,a;

    cin>>n>>m>>a;
    cout<<((long long)((n + a -1)/a) * (long long)((m + a -1)/a)) <<endl;

    return 0;
}