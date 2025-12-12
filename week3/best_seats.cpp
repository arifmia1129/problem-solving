#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> a;

        for(int i = 0; i < n; i++) {
            int x; cin >> x;

            a.push_back(x);
        }

        if(n == 2) {
            int total = a[0] + a[1];

            cout << total << "\n";
        }else {
            set<pair<int, int>> s;

            for(int i = 1; i < n; i++) {
                s.insert({a[i - 1], a[i]});
            }

            int mn = -1;

            while(!s.empty()) {
                auto p = s.begin();

                if(mn == -1) {
                    mn = p->first + p->second;
                }else{
                    mn = min(mn, (p->first + p->second));
                }

                s.erase(s.begin());
            }

            cout << mn << "\n";
        }
    }
    
    return 0;
}