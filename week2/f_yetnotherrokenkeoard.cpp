#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        vector<pair<int, char>> capitalLetter;
        vector<pair<int, char>> smallLetter;

        string s; cin >> s;

        for(int i = 0; i < s.size(); i++) {
            char c = s[i];

            if(c == 'B' && !capitalLetter.empty()) capitalLetter.pop_back();
            if(c == 'b' && !smallLetter.empty()) smallLetter.pop_back();

            if(c >= 'a' && c <= 'z' && c != 'b') smallLetter.push_back({i, c});
            else if(c >= 'A' && c <= 'Z' && c != 'B') capitalLetter.push_back({i, c});
        }

        vector<pair<int, char>> finalAns;

        finalAns.insert(finalAns.end(), smallLetter.begin(), smallLetter.end());
        finalAns.insert(finalAns.end(), capitalLetter.begin(), capitalLetter.end());

        sort(finalAns.begin(), finalAns.end());

        string output;

        for(auto[x, y]:finalAns) {
            output += y;
        }

        cout << output << '\n';
    }
    
    return 0;
}