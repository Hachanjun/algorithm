/**
 * 대문자 65(A) ~ 90(Z)
 * 소문자 97(a) ~ 122(z)
 */
#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    // 입력 스트림에서 한 줄 전체를 읽는다. (getline)
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] < 97) {
            if (s[i] + 13 > 90) {
                s[i] = s[i] + 13 - 26;
            } else {
                s[i] = s[i] + 13;
            }
        } else if (s[i] >= 97 && s[i] <= 122) {
            if (s[i] + 13 > 122) {
                s[i] = s[i] + 13 - 26;
            } else {
                s[i] = s[i] + 13;
            }
        }
        cout << s[i];
    }
}