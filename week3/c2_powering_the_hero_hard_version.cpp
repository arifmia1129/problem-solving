#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll tc; cin >> tc;

    while(tc--) {
        ll n; cin >> n;

        priority_queue<ll> pq;
        ll ans = 0;

        for(ll i = 0; i < n; i++) {
            ll x; cin >> x;

            if(x == 0 && !pq.empty()) {
                ans += pq.top();
                pq.pop();
            }else{
                pq.push(x);
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}