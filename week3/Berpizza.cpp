#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    int customerSl = 1;

    set<pair<int,int>> s;
    multiset<pair<int, int>> ml;

    vector<int> ans;

    for(int i = 0; i < n; i++) {
        int query; cin >> query;

        if(query == 1) {
            int money; cin >> money;

            s.insert({customerSl, money});
            ml.insert({money, -customerSl});
            
            customerSl++;
        }else if(query == 2) {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);

            s.erase(s.begin());
            ml.erase({money, -pos});
        }else {
             int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            ans.push_back(pos);

            ml.erase(--ml.end());
            s.erase({pos, money});
        }

    }

    for(int pos : ans) {
        cout << pos << " ";
    }
    
    return 0;
}