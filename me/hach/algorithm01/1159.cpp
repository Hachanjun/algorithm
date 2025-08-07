/**
 * 카운팅 배열, 아스키 코드 이용
 */
#include <bits/stdc++.h>
using namespace std;
string s, ret;
int N, cnt[26];
vector<int> v;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s;
        cnt[s[0] - 'a']++;
    }
    for ( int i = 0; i < 26; i++) {
        if (cnt[i] >= 5) {
            ret += (i + 'a');
        }
    }
    if (ret.size()) {
        cout << ret << "\n";
    } else {
        cout << "PREDAJA" << "\n";
    }
}