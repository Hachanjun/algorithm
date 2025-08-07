#include <bits/stdc++.h>
using namespace std;
// 주차 요금
int A, B, C;
// 도착 시간, 떠난 시간
int d, e;
// 합한 수
int ret;
// 카운팅 배열
int cnt[104];

int main() {
    cin >> A >> B >> C;
    for (int i = 0; i < 3; i++) {
        cin >> d >> e;
        for (int j = d; j < e; j++) {
            cnt[j]++;
        }
    }
    for (int i = 1; i < 100; i++) {
        if (cnt[i]) {
            if (cnt[i] == 1) ret += A;
            else if (cnt[i] == 2) ret += B * 2;
            else if (cnt[i] == 3) ret += C * 3;
        }
    }
    cout << ret;

    return 0;
}