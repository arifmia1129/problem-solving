#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    set<int> s;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;

        s.insert(x);
    }

    for(auto value : s) {
        cout << value << " ";
    }

    cout << "\n";

    // int val = 29;

    // auto it = s.find(val);

    // if(it != s.end()) {
    //     // cout << "Found\n";
    //     s.erase(val);
    // }else{
    //     cout << "Not found\n";
    // }

    // for(auto value : s) {
    //     cout << value << " ";
    // }

    // lower bound
    // int N; cin >> N;

    // cout << N << endl;

    // auto it = s.lower_bound(N);

    // if(it != s.end()) {
    //     cout << *it << "\n";
    // }else{
    //     cout << "END\n";
    // }

    // upper bound
    int N; cin >> N;

    cout << N << endl;

    auto it = s.upper_bound(N);

    if(it != s.end()) {
        cout << *it << "\n";
    }else{
        cout << "END\n";
    }
    
    return 0;
}