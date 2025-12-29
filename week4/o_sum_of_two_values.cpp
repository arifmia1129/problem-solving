#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x; cin >> n >> x;

    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++) {
        int z; cin >> z;

        v.push_back({z, i + 1});
    }

    sort(v.begin(), v.end());

    for(int i = 0, j = n - 1; i < j;) {
        if(v[i].first + v[j].first > x)
            j--;
        else if(v[i].first + v[j].first < x)
            i++;
        else {
            cout << v[i].second << " " << v[j].second;
            return 0;
        }
    }

    cout << "IMPOSSIBLE";
    
    return 0;
}