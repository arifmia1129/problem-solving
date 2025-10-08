#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    for(int i = 1; i <= n; i++) {
        string s; cin >> s;

        if(i%2) cout << s << endl;
    }
    
    return 0;
}