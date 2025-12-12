#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    if(n >= 5){
        cout << 1000;
    }else {
        cout << 200 * n;
    }
    
    return 0;
}