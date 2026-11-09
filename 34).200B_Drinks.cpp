#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    double t = 0;

    for(int i = 0;i < n;i++){
        t += (arr[i]/100.0);
    }
    cout << fixed << setprecision(12) << (t/(double)n)*100 << endl;
    

    return 0;
}