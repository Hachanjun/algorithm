/**
 * 한 글자 기준으로 logic을 작성하면 안 된다. (문제 조건에 명시되어 있는지 확인해야함)
 * 접두사 (prefix) 접미사 (suffix)
 * *를 기준으로 비교 (prefix, suffix)
 */
#include <bits/stdc++.h>
using namespace std;
int n;
string prefix, suffix, pattern, str;
int main() {
    cin >> n;
    cin >> pattern;
    int pos = pattern.find("*");
    prefix = pattern.substr(0, pos);
    suffix = pattern.substr(pos + 1);
    for (int i = 0; i < n; i++) {
        cin >> str;
        // 반례
        if (prefix.size() + suffix.size() > str.size()) {
            cout << "NE" << "\n";
        } else {
            if (prefix == str.substr(0, prefix.size()) && suffix == str.substr(str.size() - suffix.size())) {
                cout << "DA" << "\n";
            } else {
                cout << "NE" << "\n";
            }
        }
    }
}