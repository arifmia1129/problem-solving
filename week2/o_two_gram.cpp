#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    string s; cin >> s;

    map<string, int> mp;


    for(int i = 1; i < n; i++) {
        string newStr = "";
        newStr += s[i - 1];
        newStr += s[i];

        
        mp[newStr]++;
    }

    string ans;
    int mxCount = 0;

    for(auto[s, i]:mp) {
        if(mxCount == 0) {
            ans = s;
            mxCount = i;
        }
        else{
            if(i > mxCount) {
                ans = s;
                mxCount = i;
            }
        }
    }

    cout << ans << "\n";
    
    
    return 0;
}