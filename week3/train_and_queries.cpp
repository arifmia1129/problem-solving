#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc; cin >> tc;

    while(tc--) {
        int n, m; cin >> n >> m;

        map<int, set<int>> mp;

        for(int i = 1; i <= n; i++) {
            int x; cin >> x;
            mp[x].insert(i);
        }

        for(int i = 1; i <= m; i++) {
            int l, r; cin >> l >> r;

            if(mp.find(l) == mp.end() || mp.find(r) == mp.end()) {
                cout << "NO" << "\n";
            }else{
                int startingLeftMostIdx = *mp[l].begin();
                int endingRightMostIdx = *mp[r].rbegin();

                if(startingLeftMostIdx > endingRightMostIdx) {
                    cout << "NO" << "\n";
                }else{
                    cout << "YES" << "\n";
                }
            }
        }
    }
    
    return 0;
}