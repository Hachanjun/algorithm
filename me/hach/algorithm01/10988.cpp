/**
 * 팰린드롬 = 회문 = 앞으로 읽을 때와 거꾸로 읽을 때 똑같은 단어
 * reverse해서 문자열과 비교
 */
#include <bits/stdc++.h>
using namespace std;
string s;
string temp;
int main() {
    cin >> s;
    temp = s;
    reverse(temp.begin(), temp.end());
    if (temp == s) cout << 1 << "\n";
    else cout << 0 << "\n";
}