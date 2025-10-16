#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    

    while(t--) {
        map<string, vector<int>> mp;
        int n; cin >> n; int m = 3;

        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                string s; cin >> s;
                mp[s].push_back(i);
            }
        }

        vector<int> ans(m+1);

        for(auto [x, y]:mp) {
             if(y.size() == 1) {
                ans[y[0]] += 3;
            }
            if(y.size() == 2) {
                ans[y[0]]++;
                ans[y[1]]++;
            }
        }
        

        for(int i = 1; i <= m; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";

    }

   
    
    
    return 0;
}