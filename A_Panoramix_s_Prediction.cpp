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

// bool isPrime(int n){
//     for(int i = 2; i*i <= n;i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n,m;cin>>n>>m;
    
//     if(!isPrime(n) || !isPrime(m)){
//         cout<<"NO"<<endl;
//         return 0;
//     }

//     int a = 100;

//     vector<bool>prime(a+1,true);

//     prime[0] = prime[1] = false;

//     for(int i = 2;i*i <= a;i++){
//         if(prime[i]){
//             for(int j = i*i;j <= a;j += i){
//                 prime[j] = false;
//             }
//         }
//     }

//     vector<int>arr;

//     for(int i = 2;i <= a;i++){
//         if(prime[i]){
//             arr.push_back(i);
//         }
//     }

//     int id1 = 0;
//     int id2 = 0;

//     for(int i = 0;i < arr.size();i++){
//         if(arr[i] == n)
//             id1 = i;
//     }

    
//     for(int i = 0;i < arr.size();i++){
//         if(arr[i] == m)
//             id2 = i;
//     }

//     if(abs(id2 - id1) == 1)cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;

//     return 0;
    
// }
bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}


int main(){
    int n,m;cin>>n>>m;
    int nextPrime = n + 1;
    while (!isPrime(nextPrime))
        nextPrime++;

    if (nextPrime == m)
        cout << "YES";
    else
        cout << "NO";

}