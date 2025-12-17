#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc; cin >> tc;

    set<int> s;

    while(tc--) {
        int x, y; cin >> x >> y;

        if(x == 1) {
            s.insert(y);
        }else if(x == 2) {
            s.erase(y);
        }else if(x == 3) {
            auto it = s.find(y);

            if(it != s.end()) {
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
        }
    }
    
    return 0;
}