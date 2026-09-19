#include<bits/stdc++.h>
 using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    
    int cnt = 0;
    cin >> n >> k;
    int sum = 0;
      vector <int> arr(n);
    for (int j  = 0 ; j< n ; j++){
            cin >> arr[j];
            sum += arr[j];
    }
    
    for (int i =0 ; i < n;i++){
        if (sum == 0){
        cout << "0"<<"\n";
        }
       else (arr[i] >= arr[k]){
        cnt ++;
       }
    }

    cout << cnt << "\n";

    return 0;
}
