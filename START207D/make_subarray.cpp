#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        string s; cin >> s;

        bool flag = false;

        int total = 0;

        int cnt = 0;

        for(char ch : s) {
            if(ch == '1') {
                if(flag && cnt) total += cnt;
                cnt = 0;
                flag = true;
            }

            if(flag && ch == '0') cnt++;
        }

        cout << total << endl;
    }
    
    return 0;
}