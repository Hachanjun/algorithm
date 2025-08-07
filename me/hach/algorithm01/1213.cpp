/**
 * 팰린드롬 만들기
 * 불가능한 경우 찾기 -> (알파벳) 홀 수가 2개 이상
 * ex ) a b c a
 * 아스키 코드 상으로 큰 수가 가운데 위치 -> 오름차순
 * 들어온 문자열에 각 알파벳 수가 몇 개 인지 확인 -> 카운팅배열 -> 순서는 상관없다. -> 오름차순으로 재배열 하기 때문에
 * 홀 수가 1개일 경우 중앙에 배치
 */
#include <bits/stdc++.h>
using namespace std;
string s, ret;
int flag, cnt[200];
char mid;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    for (char a : s) cnt[a]++;
    for (int i = 'Z'; i >= 'A'; i--) {
        if (cnt[i]) {
            // (&)end 조건으로 마지막 수가 1인지 확인 -> 2진수로 홀수는 마지막이 무조건 1이다.
            if (cnt[i] & 1) {
                mid = char(i);
                flag++;
                cnt[i]--;
            }
            if (flag == 2) break;
            for (int j = 0; j < cnt[i]; j +=2) {
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }
    if (mid) {
        ret.insert(ret.begin() + ret.size() / 2, mid);
    }

    if (flag == 2) {
        cout << "I'm Sorry Hansoo\n";
    } else {
        cout << ret << "\n";
    }
}