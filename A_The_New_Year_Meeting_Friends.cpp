#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){

    // vector<int>arr(3);
    // for(int i = 0;i < 3;i++){
    //     cin>>arr[i];
    // }

    // sort(arr.begin(),arr.end());
    
    // cout<< arr[2]- arr[0]  <<endl;

    int a,b,c;
    cin>>a>>b>>c;

    if(a > b && a < c){
        cout<<c-b<<endl;
    }else if(b > a && b < c){
        cout<<c-a<<endl;
    }else if(c > a && c < b){
        cout<<b-a<<endl;
    }else if(a > c && a < b){
        cout<<b-c<<endl;
    }else if(b > c && b < a){
        cout<<a-c<<endl;
    }else if(c > b && c < a){
        cout<<a - b<<endl;
    }


    return 0;

}


