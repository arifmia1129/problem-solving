#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;

    cin >> tc;

    while(tc--) {
        int n; cin >> n;

        string s; cin >> s;

        int l = 0, r = n - 1, ans = n;

        while(l <= r) {
            if(s[l] == s[r]){
                break;
            }else {
                ans -= 2;
                l++, r--;
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}