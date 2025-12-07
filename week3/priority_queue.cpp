#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    
    // min heap - (non decreasing)
    // priority_queue<int> pq;

    // max heap - (non increasing)
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i = 0; i < n; i++) {
        int x; cin >> x;

        pq.push(x);
    }

    while(!pq.empty()) {
        cout << pq.top() << "\n";
        pq.pop();
    }
    
    return 0;
}