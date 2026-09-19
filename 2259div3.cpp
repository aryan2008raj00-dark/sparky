#include <bits/stdc++.h>
using namespace std;

#define forr(i,t) for(int i = 0; i < t; i++)
#define ll long long


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    forr(i,t){
        int n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = n/k;
        for (int farms = 0 ; farms < n/k; farms++){
            for (int fields = farms * k ; fields < (farms + 1) * k ; fields++){
                if (s[fields] == '0'){
                cnt--;
                
                break;
                }
            }
        }
        cout << cnt << endl;
    }
       
    return 0;
}