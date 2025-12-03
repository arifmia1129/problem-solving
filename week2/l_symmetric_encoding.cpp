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

        vector<char> v;

        map<char, int> mp;

        for(int i = 0; i < n; i++) {
           
            char ch = s[i];

            if(mp[ch] == 0) {
                v.push_back(s[i]);
            }
            mp[ch]++;
        }

        sort(v.begin(), v.end());
        map<char, char> mirrorMp;


        for(int i = 0; i < v.size(); i++) {
            char a = v[i];
            char b = v[(v.size()-1)-i];

            mirrorMp[a] = b;
            mirrorMp[b] = a;
        }

        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];
            char mirrorCh = mirrorMp[ch];

            cout << mirrorCh;
        }
        cout << '\n';
    }
    
    return 0;
}