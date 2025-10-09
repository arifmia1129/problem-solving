#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--) {
        ll n; cin >> n;

        ll mn = INT_MAX;
        ll mx = INT_MIN;

        while(n--) {
            ll x; cin >> x;

            mn = min(mn, x);
            mx = max(mx, x);
        }

      if(mn == mx) {
            cout << mn * 3 << endl;
      }else {
          cout << mx - mn << endl;
      }
    }
    
    return 0;
}