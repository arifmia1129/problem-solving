#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int happyDays = 0;
        
        for(int i = 0; i < n; i++) {
            if((a[i] > b[i] * 2) || (b[i] > a[i] * 2)) {
                continue;
            }else happyDays++;
        }

        cout << happyDays << "\n";
    }
    
    return 0;
}