#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    deque<int> dq(n);

    for(int i = 0; i < n; i++) {
        cin >> dq[i];
    }

    dq.push_front(0);

    cout << dq.front() << endl;

    for(int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }

    cout << "\n";

    
    return 0;
}