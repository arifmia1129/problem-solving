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

        ll currentSum = 0;

        vector<ll> gains;

        for(int i = 0; i < n; i++) {
            ll leftCount = i;
            ll rightCount = n - 1 - i;

            if(s[i] == 'L') {
                currentSum += leftCount;
                ll gain = rightCount - leftCount;

                if(gain > 0) gains.push_back(gain);
            }else{
                 currentSum += rightCount;
                 ll gain = leftCount - rightCount;

                 if(gain > 0) gains.push_back(gain);
            }

           
        }

        sort(gains.begin(), gains.end(), greater<ll>());

        ll total = currentSum;
        int idx = 0;
        for(int k = 1; k <= n; k++) {
            if(idx < gains.size()) {
                total += gains[idx];
                idx++;
            }

            cout << total << " ";
        }

        cout << '\n';
    }
    
    return 0;
}

// 