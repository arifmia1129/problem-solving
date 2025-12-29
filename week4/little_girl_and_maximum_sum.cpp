#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q; cin >> n >> q;

    vector<int> a(n + 1);

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> d(n + 2);

    for(int i = 1; i <= q; i++) {
        int l, r; cin >> l >> r;

        d[l]++;
        d[r + 1]--;
    }

    for(int i = 1; i <= n; i++) {
        d[i] = d[i - 1] + d[i];
    }

    sort(a.begin() + 1, a.begin() + n + 1, greater<int>());
    sort(d.begin() + 1, d.begin() + n + 1, greater<int>());


    ll ans = 0;

    for(int i = 1; i <= n; i++) {
        ans += (1LL * d[i] * a[i]);
    }

    cout << ans << '\n';
    
    return 0;
}