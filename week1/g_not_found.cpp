#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    


    int arr[26] = {0};

    for(char ch : s) {
        int val = ch - 97;


        arr[val]++;
    }

    bool isMiss = false;
    char missCh;




    for(int i = 0; i < 26; i++) {
        if(arr[i] == 0) {
            isMiss = true;
            missCh = 'a' + i;
            break;
        }
    }

    if(!isMiss) cout << "None";
    else cout << missCh;
    
    return 0;
}