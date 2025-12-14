#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    
    while(tc--) {
        int n, m, q;

    cin >> n >> m >> q;

    vector<int> teachers(m);

    for(int i = 0; i < m; i++) {
        cin >> teachers[i];
    }

    sort(teachers.begin(), teachers.end());

    while(q--) {
        int david;
        cin >> david;

        if(david < teachers[0]) {
            cout << teachers[0] - 1 << "\n";
            continue;
        }

        if(david > teachers[m - 1]) {
            cout << n - teachers[m - 1] << "\n";
            continue;
        }

        auto it = lower_bound(teachers.begin(), teachers.end(), david);
        
        auto jt = it;

        jt--;

        int right = *it;


        int left = *jt;

        int mid = (left + right) / 2;

        cout << min(abs(mid-left), abs(mid-right)) << "\n";
    }
    }
    
    return 0;
}