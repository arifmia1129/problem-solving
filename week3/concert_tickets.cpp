#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m; cin >> n >> m;

    multiset <int> ml;

    for(int i = 0; i < n; i++) {
        int h; 
        cin >> h;
        
        ml.insert(h);
    }

    for(int i = 0; i < m; i++) {
        int t; 
        cin >> t;

        auto it = ml.upper_bound(t);

        if(it == ml.begin()) {
            cout << -1 << "\n";
        }else{
            it--;

            
            cout << *it << "\n";
            ml.erase(it);
        }
    }
    
    return 0;
}