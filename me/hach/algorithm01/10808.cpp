/**
 * count 
 * string 기반일 경우에는 Map, int 기반이면 배열
 * 이 문제는 문자를 기반으로 count 아스키코드를 활용한 배열로 풀이
 * 알파벳 개수는 26개
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// 전역 변수로 선언하면 0으로 초기화된다. 코딩테스트는 전역변수로 하는 것이 좋다.
int cnt[26];
string str;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> str;
    for (char a : str) {
        cnt[a - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        cout << cnt[i] << " ";
    }
}