#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n; cin >> n;

    vector<string> v;

    while(n--) {
        string s; cin >> s;

       v.push_back(s);
    }

    reverse(v.begin(), v.end());

    map<string, int> mp;

    for(string s:v) {
        if(mp[s] == 0) {
            cout << s << "\n";
        }

        mp[s]++;
    }
    
    return 0;
}