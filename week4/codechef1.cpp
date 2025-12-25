#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc; cin >> tc;
    
    while(tc--) {
        int n;
        cin >> n;
        
        vector<int> a(n), c(n);
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for(int i = 0; i < n; i++) {
            cin >> c[i];
        }
        
        vector<ll> dp(1 << n, LLONG_MAX);
        dp[0] = 0;
        
        for(int mask = 0; mask < (1 << n); mask++) {
            if(dp[mask] == LLONG_MAX) continue;
            
            int remaining = __builtin_popcount(mask ^ ((1 << n) - 1));
            
            int pos = 0;
            for(int i = 0; i < n; i++) {
                if(!(mask & (1 << i))) {
                    // Element i is still in array at position pos
                    int new_mask = mask | (1 << i);
                    ll cost = (ll)a[i] * c[pos];
                    dp[new_mask] = min(dp[new_mask], dp[mask] + cost);
                    pos++;
                }
            }
        }
        
        cout << dp[(1 << n) - 1] << endl;
    }
    
    return 0;
}


