#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll tc;
    cin >> tc;

    while(tc--) {
        ll n;
        cin >> n;

        map<string, ll> cnt;
        map<char, ll> first_pos;
        map<char, ll> second_pos;

        ll ans = 0;

        for(int i = 0; i < n; i++) {
            string s; cin >> s;

            ans += first_pos[s[0]] - cnt[s];
            ans += second_pos[s[1]] - cnt[s]; 

            cnt[s]++;
            first_pos[s[0]]++;
            second_pos[s[1]]++;
        }

        cout << ans << "\n";
    }
    
    return 0;
}