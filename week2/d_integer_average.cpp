#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        bool flag = false;

        ll tl = 0;

        for(int i = 1; i <= n; i++) {
            ll x; cin >> x;

            tl += x;

            int avg = tl/i;

            if(i > 1 && avg%2 == 0) {
                flag = true;
                break;
            }
        }

        if(flag) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
    
    return 0;
}