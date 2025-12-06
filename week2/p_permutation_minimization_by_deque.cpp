#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc; cin >> tc;


    while(tc--) {
        int n; cin >> n;

        deque<int> dq;

        int last = -1;

        for(int i = 0; i < n; i++) {
            int value; cin >> value;

            if(last == -1) {
                dq.push_back(value);
            }else{
                if(value < last && dq.front() > value) {
                    dq.push_front(value);
                }else{
                    dq.push_back(value);
                }
            }

            last = value;
        }

        for(auto v : dq) {
            cout << v << " ";
        }

        cout << '\n';
    }
    
    
    return 0;
}