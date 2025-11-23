#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // pair<string, int> student = {"ariba", 1};

    // cout << student.first << " " << student.second << "\n";

    // student.first = "arif";
    // student.second = 2;

    // auto [name, roll] = student;

    // cout << name << " " << roll << endl;

    // int n; cin >> n;

    // pair<string, int> students[n];


    // for(int i = 0; i < n; i++){
    //     string name; cin >> name;
    //     int roll; cin >> roll;

    //     students[i].first = name;
    //     students[i].second = roll;
    // }

    // for(auto[x, y]:students) {
    //     cout << x << " " << y << endl;
    // }

    // int n; cin >> n;


    // tuple<string, int, string> persons[n];

    // for(int i = 0; i < n; i++) {
    //     string name; cin >> name;
    //     int roll; cin >> roll;
    //     string gender; cin >> gender;

    //     persons[i] = {name, roll, gender};
    // }

    // for(auto[x, y, z]:persons) {
    //     cout << x << " " << y << " " << z << "\n";
    // }

    // vector<int> v;

    // int n; cin >> n;

    // for(int i = 0; i < n; i++) {
    //     int x; cin >> x;
    //     v.push_back(x);
    // }

    // v.pop_back();

    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] << "\n";
    // }

    // cout << "Front -> " << " " << v.front() << "\n";
    // cout << "Back -> " << " " << v.back() << "\n";

    // v.clear();

    // cout << "Is empty -> " << v.empty() << "\n";

    // reverse(v.begin(), v.end());
    // sort(v.begin(), v.end(), greater<int>());

    // auto mn = min_element(v.begin(), v.end());
    // auto mx = max_element(v.begin(), v.end());

    // cout << "Min: " << *mn << " " << "Max: " << *mx << endl;

    // auto idx = mx - v.begin();

    // cout << "Max element position: " << idx << endl;

    // for(auto it = v.begin(); it != v.end(); it++) {
    //     cout << *it << " ";
    // }
    // cout << "\n";

    // int n; cin >> n;

    // deque<int> dq(n);

    // for(int i = 0; i < n; i++) {
    //     cin >> dq[i];
    // }

    // dq.push_front(1);
    // dq.push_front(9);

    // for(int i = 0; i < n; i++) {
    //     cout << dq[i] << " ";
    // }

    // cout << '\n';

    // dq.pop_front();

    // for(int i = 0; i < n; i++) {
    //     cout << dq[i] << " ";
    // }

    // cout << '\n';

    // string s; cin >> s;

    // cout << s.front() << '\n';
    // cout << s.back() << '\n';
    // cout << s.size() << '\n';

    // cout << s.substr(0, 3) << '\n';

    // int n, m; cin >> n >> m;

    // vector<vector<int>> v(n, vector<int>(m));

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         cin >> v[i][j];
    //     }
    // }

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         cout << v[i][j] << " ";
    //     }

    //     cout << '\n';
    // }

    map<int, int> mp;

    mp[10] = 2;
    mp[20] = 3;
    mp[30] = 4;

    for(auto[key, value] : mp) {
        cout << key << " -> " << value << '\n';
    }
    cout << '\n';
    // auto it = mp.find(10);

    // if(it == mp.end()) {
    //     cout << "Not found! Try with another key" << '\n';
    // }else{
    //     mp.erase(it);
    //     // cout << "Found it!" << " " << it->first << " -> " << it->second << '\n';
    // }

    // for(auto[key, value] : mp) {
    //     cout << key << " -> " << value << '\n';
    // }

    // auto it = mp.lower_bound(10);
    auto it = mp.upper_bound(10);

    cout << it->first << " " << it->second << '\n';
    
    return 0;
}