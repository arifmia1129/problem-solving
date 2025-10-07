#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b; cin >> a >> b;

    if(a == b) cout << a + b;
    else {
        int mx = max(a, b);

        cout << mx + (mx-1);
    }
    
    return 0;
}