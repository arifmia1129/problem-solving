#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        set<int> st;

        int i;

        for(i = n - 1; i >= 0; i--) {
            if(st.count(v[i])) break;
            st.insert(v[i]);
        }

        cout << (i + 1) << '\n';
    }
    
    return 0;
}