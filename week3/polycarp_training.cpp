#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    multiset<int> ml; 

    for(int i = 0; i < n; i++) {
        int x; cin >> x;

        ml.insert(x);
    }

    int ans = 0, days = 1;

    while(!ml.empty()) {
        auto LB = ml.lower_bound(days);

        if(LB != ml.end()) {
            ans++;
            ml.erase(LB);
        }else{
            break;
        }
        days++;
    }

    cout << ans;
    
    return 0;
}