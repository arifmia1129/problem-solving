#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int X, Y, K; cin >> X >> Y >> K;
    
    if(abs(X - Y) <= K)
        cout << "YES\n";
    else    
        cout << "NO\n";
    
    return 0;
}