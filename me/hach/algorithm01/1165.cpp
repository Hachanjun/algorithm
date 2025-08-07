/**
 * 알파벳 -> 번호 = str -> int (이 경우 map -> O(logN))
 * 숫자 -> 문자 = int -> str (이 경우 배열 -> O(1))
 * ==> atoi(str.c_str) 0이면 문자 0이 아니면 숫자
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int n, m;
map<string, int> mp;
//map<int, string> mp2;
string a[100004], s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> s;
        mp[s] = i + 1;
        //mp2[i + 1] = s;
        a[i + 1] = s;
    }

    for (int i = 0; i < m; i++) {
        cin >> s;
        if (atoi(s.c_str()) == 0) {
            cout << mp[s] << "\n";
        } else {
            cout << a[atoi(s.c_str())] << "\n";
            //cout << mp2[atoi(s.c_str())]
        }
    }
}