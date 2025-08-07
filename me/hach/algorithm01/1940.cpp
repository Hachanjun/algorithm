/**
 * 경우의 수 -> 조합 (nCr) = n! / (r! * (n-r)!)
 */
#include <bits/stdc++.h>
using namespace std;
int N, M, cnt, a[15001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    // 시간 초과 문제가 있을 수 있기 때문에 처리
    if (M > 200000) cout << 0 << "\n";
    else {
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (a[i] + a[j] == M) cnt++;
            }
        }
        cout << cnt << "\n";
    }
}