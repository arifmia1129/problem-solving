#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--) {
        int n, a, b; cin >> n >> a >> b;


        int minX = INT_MAX;
        int minY = 0;
        
        while(n--) {
            int x, y; cin >> x >> y;

            if(x != a && x != b && y != a && y != b) {
                if((x + y) < (minX + minY) ){
                    minX = x;
                    minY = y;
                }
            }

           
        }
        if(minX != INT_MAX) cout <<abs(( a + b) - (minX + minY)) << endl;
        else cout << 0 << endl;
    }
    
    return 0;
}