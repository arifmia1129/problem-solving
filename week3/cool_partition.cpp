#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        vector<ll> a(n);

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<ll> s;

        s.insert(a[0]);

        ll ans = 1;
        int idx = 0;

        for(ll i = 1; i < n; i++) {

            auto it = s.find(a[i]);

            if(it != s.end()) {
                s.erase(a[i]);
            }

            if(s.empty()) {
                ans++;
                for(int j = idx + 1; j <= i; j++) {
                    s.insert(a[j]);
                }

                idx = i;
            }
        }

        cout << ans << "\n";
    }
    
    return 0;
}

// 2
// 3
// 1
// 3
// 1
// 3
// 3
// 4