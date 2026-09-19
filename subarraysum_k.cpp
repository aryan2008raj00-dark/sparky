#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 9;
    int arr[n] = {1,2,3,1,1,1,4,2,3};
    int l = 3,leng = 0;
   
    for (int i = 0; i < n; i++){
        for (int j = i ; j < n ; j++){
         int sum =0;
            for (int k = i ; k <= j ;k++){
                sum += arr[k];
            }
                if (sum == l ){
                    leng = max(leng , j - i + 1);
                
            }
          
        }
        
    }
    cout << leng;

    return 0;
}