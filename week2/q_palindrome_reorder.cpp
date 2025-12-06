#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;

   if(s.size() == 1) {
    cout << s << '\n';
   }else {
     map<char, int> mp;

    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }

    bool notPossible = false;
    int justOneCount = 0;

    deque<char> dq;

    for(auto[ch, cnt]:mp) {
        if(cnt == 1) {
           dq.push_back(ch);
            justOneCount++;
        };

        if(cnt > 1 && cnt % 2 != 0) {
            notPossible = true;
            break;
        }

        if(cnt % 2 == 0) {
            bool rightSide = true;
            while(cnt--) {
                if(rightSide) {
                    dq.push_back(ch);
                }else {
                    dq.push_front(ch);
                }

                rightSide = !rightSide;
            }
        }
    }

    if(notPossible || justOneCount > 1) {
        cout << "NO SOLUTION" << '\n';
    }else{
        for(char ch : dq) {
            cout << ch;
        }
        cout << '\n';
    }
   }
    
    return 0;
}