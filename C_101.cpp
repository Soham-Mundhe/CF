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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        vector<int> ones;
        vector<int> minone;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];

            if(arr[i] == 1)
                ones.push_back(i);

            if(arr[i] == -1)
                minone.push_back(i);
        }

        for(int i : minone) {
            arr[i] = 0;
        }

       
        if(!ones.empty()) {

            
            for(int i = 1; i < ones.size(); i++) {
                int left = ones[i - 1];
                int right = ones[i];
            }

            if(!minone.empty()) {
                int firstOne = ones.front();

                for(int x : minone) {
                    if(x < firstOne) {
                        arr[x] = 0;
                    }
                }

                int left = -1;

                for(int x : minone) {
                    if(x < firstOne) {
                        left = x;
                        break;
                    }
                }

                if(left != -1) {
                    arr[left] = 1;
                }

                int lastOne = ones.back();
                int right = -1;

                for(int i = (int)minone.size() - 1; i >= 0; i--) {
                    if(minone[i] > lastOne) {
                        right = minone[i];
                        break;
                    }
                }

                if(right != -1) {
                    arr[right] = 1;
                }
            }
        }

        else {

            if(minone.size() >= 2) {
                arr[minone.front()] = 1;
                arr[minone.back()] = 1;
            }
            else if(minone.size() == 1) {
                arr[minone[0]] = 1;
            }
        }

        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}