#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c; cin >> a >> b >> c;

    int mn = min(a, b);

    mn = min(mn, c);

    cout << mn;
    
    return 0;
}