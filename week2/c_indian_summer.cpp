#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    map<pair<string, string>, int> mp;

    while(n--) {
        string l, c; cin >> l >> c;

        mp[{l, c}]++;
    }

    cout << mp.size() << endl;
    
    return 0;
}