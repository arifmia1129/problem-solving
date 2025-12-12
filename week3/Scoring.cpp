#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--) {
        int x, y; cin >> x >> y;

        int alice = (x + y) / 2;
        int bob = y - alice;

        cout << alice  << " " << bob << "\n";
    }
    
    return 0;
}