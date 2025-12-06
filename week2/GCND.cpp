#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc; cin >> tc;

    while(tc--) {
        int n; cin >> n;
        vector<int> a(n);
        set<int> st;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            st.insert(a[i]);
        }

        if(st.size() == 1) {
            cout << *(st.begin()) - 1 << "\n";
        }else if(st.size() > 2) {
            cout << *(st.rbegin()) - 1 << "\n";
        }else {
            auto it = st.begin();

            int val1 = *it;

            ++it;

            int val2 = *it;

            if(val2 - val1 == 1) {
                cout << val1 - 1 << "\n";
            }else{
                cout << val2 - 1 << "\n";
            }
        }
    }
    
    return 0;
}