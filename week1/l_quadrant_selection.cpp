#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y; cin >> x >> y;

    // conditions

    if(x > 0 && y > 0) cout << 1;
    else if(x < 0 && y > 0) cout << 2;
    else if(x < 0 && y < 0) cout << 3;
    else cout << 4;
    
    return 0;
}