#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<char, int> mp;

    string s; cin >> s;

    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }

    string ans;
    int num_of_odd = 0;
    char ch = 0;

    for(auto[F, S]:mp) {
        if(S%2 != 0) {
            num_of_odd++;
            ch = F;
        }

        for(int i = 0; i < S/2; i++) {
            ans.push_back(F);
        }
    }

    if(num_of_odd == 0) {
        cout << ans;
        reverse(ans.begin(), ans.end());
        cout << ans;
    }else if(num_of_odd == 1) {
        cout << ans << ch;
        reverse(ans.begin(), ans.end());
        cout << ans;
    }else {
        cout << "NO SOLUTION";
    }
    
    
    return 0;
}