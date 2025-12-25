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

    vector<int> d(n + 2), p(n + 2);

    for(int i = 1; i <= q; i++) {
        int l, r, x;

        cin >> l >> r >> x;

        d[l] += x;
        d[r + 1] -= x;
    }

    for(int i = 1; i <= n; i++) {
        p[i] = p[i - 1] + d[i];
    }

    for(int i = 1; i <= n; i++) {
        cout << p[i] + a[i] << " ";
    }
    
    return 0;
}