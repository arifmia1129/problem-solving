#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    set<int> st;

    for(int i = 1; i < n; i++){
        int x; cin >> x;

        st.insert(x);
    }

    int last = INT_MIN;

    while(!st.empty()) {
        int top = *st.begin();
        if(last == INT_MIN) {
            last = top;
        }else {
            if((top - last) > 1){
                cout << (top - 1) << endl;
                break;
            }

            last = top;
        }

        if(st.size() == 1 && top != n) {
            cout << n << endl;
        }else if(st.size() == 1){
            cout << n - 1 << endl;
        }

        st.erase(top);
    }
    
    return 0;
}