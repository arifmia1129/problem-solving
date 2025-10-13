#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // pair example

    // int n; cin >> n;

    // pair<string, int> person[n];

    // for(int i = 0; i < n; i++) {
    //     cin >> person[i].first >> person[i].second;
    // }

    // for(auto[x, y]:person) {
    //     cout << x << " " << y << endl;
    // }


    // tuple example
    int n; cin >> n;
    
    tuple<string, int, char> student[n];

    for(int i = 0; i < n; i++) {
        string name; cin >> name;
        int roll; cin >> roll;
        char section; cin >> section;

        student[i] = make_tuple(name, roll, section);
    }

    for(auto[x, y, z]:student) {
        cout << x << " " << y << " " << z << endl;
    }
    
    return 0;
}