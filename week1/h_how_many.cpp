#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s, t; cin >> s >> t;

    int mx = 1000;

    int cnt = 0;

    for(int i = 0; i < mx; i++) {
        for(int j = 0; j < mx; j++) {
            for(int k = 0; k < mx; k++) {
                if(((i + j + k) <= s) && ((i * j * k) <= t))
                    cnt++;
                else 
                    break;
            }
        }
    }

    cout << cnt << endl;
    
    return 0;
}