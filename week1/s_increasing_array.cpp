#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n; cin >> n;

    ll arr[n + 1];

    ll move = 0;
    
    for(ll i = 0; i < n; i++) {
        if(i == 0) cin >> arr[i];
        else {
            int x; cin >> x;

            if(arr[i - 1] > x) {
                move += arr[i - 1] - x;
                arr[i] = x + (arr[i - 1] - x);
            }else {
                arr[i] = x;
            }
        }
    }

    cout << move << endl;
    
    return 0;
}