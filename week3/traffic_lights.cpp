#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int x, n;

    cin >> x >> n;

    set<int> lights;
    multiset<int> distances;

    lights.insert(0);
    lights.insert(x);
    distances.insert(x);

    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;

        auto it = lights.upper_bound(p);
        int right = *it;
        it--;

    }
    
    return 0;
}