#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc; cin >> tc;

    while(tc--) {
        int n, k; cin >> n >> k;

        

        string s; cin >> s;

        int cnt0 = 0;
        int cnt1 = 0;
         
        for(int i = 0; i < n; i++) {
            if(s[i] == '0')
                cnt0++;
            else    
                cnt1++;
        }
        int mx = max(cnt0, cnt1);

        int base = n / k;
        int rem  = n % k;

        int capacity = 0;

        for(int i = 0; i < k; i++){
            int g = base + (i < rem ? 1 : 0);
            capacity += (g + 1) / 2;
        }

        cout << (mx <= capacity ? "Yes\n" : "No\n");
    }
    
    return 0;
}