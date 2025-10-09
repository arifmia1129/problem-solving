#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;

    bool isHiss = false;

    int n = s.size();

    for(int i = 1; i < n; i++) {
        if(s[i - 1] == 's' && s[i] == 's'){
            isHiss = true;
            break;
        }
    }
    
    if(isHiss) cout << "hiss" << endl;
    else cout << "no hiss" << endl;
    
    return 0;
}