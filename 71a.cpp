#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        int a = s.size() - 1;
        if (s.size() <= 10)
        cout << s << "\n";
        else 
        cout << s[0] << s.size() -2 << s[a] << "\n";
    }

    return 0;
}