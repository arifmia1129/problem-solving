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

        // sort(v.begin(), v.end());

        for(int i = 0; i < n; i++) {
            cout << (n) - v[i] + 1 << " ";
        }
        cout<<endl;
    }
    
    return 0;
}