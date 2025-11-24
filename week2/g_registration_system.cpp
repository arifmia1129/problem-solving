#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    map<string,int> mp;

    while(t--) {
        string s; cin >> s;

        if(mp[s] == 0) {
            cout << "OK" << '\n';
        }else {
            string newUser = s + to_string(mp[s]) ;
            cout << newUser << '\n';
        }

        mp[s]++;
    }
    
    return 0;
}