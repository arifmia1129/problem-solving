#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int v;

   while(cin >> v) {
        if(v == 0) break;

        // int ans = ((v) * (v + 1) * ((2 * v) + 1)) / 6;
        int ans = (v * (v + 1) * ((2 * v) + 1)) / 6;
        cout << ans << endl;
    }
    
    return 0;
}