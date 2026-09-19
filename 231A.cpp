#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int cnt = 0;
    for(int i = 0; i < t; i++){
        int a,b,c;
        cin >> a >> b >> c;
        int sum = 0;
        
        sum = a + b +c;
        if (sum >= 2) {
        cnt++;
        }
        
    }
    cout << cnt <<"\n";

    return 0;
}
