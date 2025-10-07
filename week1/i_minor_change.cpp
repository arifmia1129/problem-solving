#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1, s2; cin >> s1 >> s2;

    int n = s1.length();

    

    int cnt = 0;

    for(int i = 0; i < n; i++) {
        if(s1[i] != s2[i])cnt++;
    }


    cout << cnt;
    
    return 0;
}