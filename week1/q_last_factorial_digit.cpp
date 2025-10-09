#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t; 

    while(t--) {
        int n; cin >> n;

        int fac = 1;

        for(int i = 1; i <= n; i++) 
            fac *= i;

        if(fac < 10)
            cout << fac << endl;
        else{
            cout << fac % 10 << endl;
        }
    }
    
    return 0;
}