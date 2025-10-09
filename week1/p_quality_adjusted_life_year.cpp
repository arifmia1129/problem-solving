#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    float total = 0;

    while(n--) {
        float a, b; cin >> a >> b;

        total += a * b;
    }

    cout << total << endl;
    
    return 0;
}