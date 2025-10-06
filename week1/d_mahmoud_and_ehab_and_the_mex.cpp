#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q; cin >> n >> q;

    vector<int> v;

    int cnt = 0;
    bool flag = false;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;

        if(x == q) flag = true;

        v.push_back(x);

        if(x < q) cnt++;
    }

    sort(v.begin(), v.end());


    if(q == 0 && v[0] == 0) cout << 1 << endl;
    else if(q == 0) cout << 0 << endl;
    else{
        if(flag) {
            cout << abs(q - cnt) + 1 << endl;
        }else {
            cout << abs(q - cnt) << endl;
        }
    }

    return 0;
}