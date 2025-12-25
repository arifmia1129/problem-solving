#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
	// your code goes here
    int tc; cin >> tc;
    
    while(tc--) {
        int n; cin >> n;
        
        vector<int> ar(n);
        
        int mx = 0;

        // previous was wrong, because i think my even odd approach was wrong
        // we need to calculate and each items different
        // then better try with gcd 
        // finally minus current elements numbers from total after with gcd

        for(int i = 0; i < n; i++) {
            cin >> ar[i];
            
            mx = max(mx, ar[i]);
        }

        int result = ar[0];
        
        for(int i = 1; i < n; i++) {
            result = __gcd(result, ar[i]);
        }
        
        
        int total = (mx / (result * 1.0)) - ar.size();
        
        cout << total << '\n';
        
    }
}
