#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        string s; cin >> s;

        int whiteIdx = 0;
        int blackIdx = 0;

        for(int i = 0; i < n; i++) {
            if(blackIdx == 0 && s[i] == 'W') {
                whiteIdx = i + 1;
            }

            if(s[i] == 'B') blackIdx = i + 1;
        }

        cout << blackIdx - whiteIdx << endl;
    }
    
    return 0;
}