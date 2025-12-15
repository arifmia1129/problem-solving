#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;

    while(tc--) {
        int n, m;
        cin >> n >> m;

        string s; 
        cin >> s;

        set<int> idx;

        for(int i = 0; i < m; i++) {
            int val; 
            cin >> val;

            idx.insert(val);
        }

        string c;
        cin >> c;

        sort(c.begin(), c.end());

        
        
        vector<int> v;

        for(auto i : idx) {
            v.push_back(i - 1);
        }

        for(int i = 0; i < v.size(); i++) {
            s[v[i]] = c[i];
        }

        cout << s << '\n';
    }
    
    
    return 0;
}