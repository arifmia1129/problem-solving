#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
       cin >> v[i];
    }

    int l = 0, r = n - 1;

    int first = 0, second = 0;

    bool current1 = true;

    while(l <= r) {
        int lVal = v[l];
        int rVal = v[r];

        int mx = max(lVal, rVal);

        if(current1) first += mx;
        else second += mx;

        if(lVal > rVal) l++;
        else r--;

        current1 = !current1;
    }

    cout << first << " " << second;
    
    
    return 0;
}

