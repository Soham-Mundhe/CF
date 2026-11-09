#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool disYear(int num){
    unordered_set<int> st;

    while(num > 0){
        int dig = num % 10;

        if(st.count(dig))return false;

        st.insert(dig);
        num /= 10;
    }

    return true;

}

int main(){
    int n;
    cin>>n;

    while(1){
        n++;
        if(disYear(n)){
            cout<<n<<endl;
            break;
        }
    }


    return 0;
}