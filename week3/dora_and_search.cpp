#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        vector<int> a(n);
        set<int> s;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }

        int left = 0, right = n - 1;
        bool isFound = false;

        while(left < right) {
            int mn = *s.begin();
            int mx = *s.rbegin();

            if(a[left] != mn && a[left] != mx && a[right] != mn && a[right] != mx) {
                cout << left + 1 << " " << right + 1 << "\n";
                isFound = true;
                break;
            }
            else if(a[left] == mn || a[left] == mx) {
                s.erase(a[left]);
                left++;
            }
            else if(a[right] == mn || a[right] == mx) {
                s.erase(a[right]);
                right--;
            }
        }

        if(!isFound)
            cout << -1 << "\n";
    }
    
    return 0;
}