#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    vector<int> v;

    while(n--) {
        int x; cin >> x;
        v.push_back(x);
    }

    sort(v.rbegin(), v.rend());

    for(int e : v)
        cout << e << '\n';

    // auto mxEle = max_element(v.begin(), v.end());
    // auto mxEleIdx = mxEle - v.begin();
    
    // cout << mxEleIdx;
    
    return 0;
}