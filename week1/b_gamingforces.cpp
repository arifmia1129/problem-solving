#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int  t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> v(n);

        int cnt = 0;

        for(int i = 0; i < n; i++) {
            cin >> v[i];

            if(v[i] == 1) cnt++;
        }

        int ans = n - (cnt/2);

        cout << ans << "\n";
        
    }
    
    
    return 0;
}