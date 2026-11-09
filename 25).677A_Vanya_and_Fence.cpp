#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;

    vector<int>frends(n);

    for(int i = 0;i < n;i++){
        cin>>frends[i];
    }

    int sum = 0;

    for(int i = 0;i < n;i++){
        if(frends[i] <= h) sum++;
        else sum +=2;
    }

    cout<<sum<<endl;

    return 0;
}