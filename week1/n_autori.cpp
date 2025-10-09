#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    string newS;

    int cnt = 0;
    char currentCh;

    for(char ch : s) {
        if(cnt == 0 || currentCh == '-') newS += ch;
        currentCh = ch;
        cnt++;
    }

    cout << newS;
    
    return 0;
}