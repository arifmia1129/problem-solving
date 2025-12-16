#include<bits/stdc++.h>
 #include <algorithm>
using namespace std;
#define ll long long int

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    if(a.first != b.first)
        return a.first > b.first;
    else    
        return a.second < b.second;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc; cin >> tc;

    while(tc--) {
        int n; cin >> n;

        vector<pair<int, int>> players;

        for(int i = 1; i <= n; i++) {
            int score = __gcd(i, n);
            players.push_back({score, i});
        }

        sort(players.begin(), players.end(), cmp);

        for(auto player : players) {
            cout << player.second << " ";
        }
        cout << '\n';
    }
    
    return 0;
}