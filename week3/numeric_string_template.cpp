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

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m; 
        cin >> m;

        while(m--) {
            string s;
            cin >> s;

            if(s.size() != n){
                cout << "NO" << "\n";
                continue;;
            }

            map<char, int> charToNum; //char -> num mapping
            map<int, char> numToChar; //num -> char mapping
            bool flag = true;

            for(int i = 0; i < s.size(); i++) {
                    char ch = s[i];
                    int num = a[i];

                    if(charToNum.count(ch)) {
                        if(charToNum[ch] != num) {
                            flag = false;
                            break;
                        }
                    }else{
                        charToNum[ch] = num;
                    }

                     if(numToChar.count(num)) {
                        if(numToChar[num] != ch) {
                            flag = false;
                            break;
                        }
                    }else{
                        numToChar[num] = ch;
                    }
                }

                if(flag)
                    cout << "YES\n";
                else    
                    cout << "NO\n";
            }
    }
    
    return 0;
}