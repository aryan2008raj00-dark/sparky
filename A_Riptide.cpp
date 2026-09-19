#include <bits/stdc++.h>
using namespace std;

// #define forr(i,t) for(int i = 0; i < t; i++)
#define ll long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0 ; i < t; i++){
        int a, b, c;
        cin >> a >> b >> c;
        int arr[] = {a,b,c};
         // cin >> a >> b >> c;
        sort(arr , arr + 3);
        int m = arr[2] - arr[0];
        int n = arr[2] - arr[1];
        int o = arr[1] - arr[0];
        cout << min({m,n,o}) << endl;
    }

    return 0;
}