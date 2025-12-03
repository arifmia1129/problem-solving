#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        string password1; cin >> password1;
        string password2; cin >> password2;

        // 010001
        // 010111

        int evenCount = 0;
        int freeEvenCount = 0;

        int oddCount = 0; 
        int freeOddCount = 0;

        for(int i = 0; i < n; i++) {
            if(i%2 == 0) {
                if(password1[i] == '1') {
                    evenCount++;
                }

                if(password2[i] == '0'){
                    freeEvenCount++;
                }
            }
            else{
                if(password1[i] == '1') {
                    oddCount++;
                }

                if(password2[i] == '0'){
                    freeOddCount++;
                }
            }
        }

        if(freeOddCount >= evenCount && freeEvenCount >= oddCount) {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        
    }
    
    return 0;
}