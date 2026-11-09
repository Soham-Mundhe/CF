#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    string s;
    cin>>s;

    int AC = 0;
    int DC = 0;

    for(char ch : s){
        if(ch == 'A')AC++;
        else DC++;
    }

    if(AC > DC)cout<<"Anton"<<endl;
    if(DC > AC)cout<<"Danik"<<endl;
    if(DC == AC)cout<<"Friendship"<<endl;

    return 0;


}