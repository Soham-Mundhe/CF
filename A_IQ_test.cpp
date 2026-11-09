#include<iostream>
#include<vector>
using namespace std;

int main(){
    int sumE = 0;
    int sumO = 0;

    int n;cin>>n;

    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    for(int x : arr){
        if(x % 2 ==0){
            sumE++;
        }else{
            sumO++;
        }
    }

    if(sumE > sumO){
        for(int i = 0;i < n;i++){
            if(arr[i] % 2 != 0){
                cout<<i+1<<endl;
                break;
            }
        }
    }else{
         for(int i = 0;i < n;i++){
            if(arr[i] % 2 == 0){
                cout<<i+1<<endl;
                break;
            }
        }
    }

    return 0;
}


