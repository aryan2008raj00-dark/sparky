#include <bits/stdc++.h>
using namespace std;

#define forr(i,t) for(int i = 0; i < t; i++)
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--){
        ll n , k ;
        cin >> n >> k;
        ll val = n;
        if (k < n || k >= 2* n){
            cout << "-1" << endl;
            continue;
        }
        vector <vector<ll>>ans(n+1,vector<ll>(n+1)); // n+1 cuz no problem for indexing

        for(ll i = 1; i <= n ; i++){
            for(ll j = 1; j<= n; j++){
                if (i == j){
                    ans[i][j] = i;
                }
                else {
                    ans[i][j] = val+1;            // fill random number 
                    val++;
                }
            }
        }
        ll shift = k - n;
        while (shift--){
            ll r = 2;
            swap (ans[r][1] , ans[r][r]);
            r++;
        }
        for(ll i = 1; i <= n ; i++){
            for(ll j = 1; j<= n; j++){
                
                cout << ans[i][j] << " ";
            }
            cout << endl;
            
        }
    }


    return 0;
}