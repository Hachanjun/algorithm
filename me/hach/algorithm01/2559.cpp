/**
 * N : 1 ~ 10만
 * K : 1 ~ 10만 - 1 (n 사이의 값이라고 했기 때문에)
 * 온도는 -100 ~ 100
 * 연속된 온도의 합이 "최대"되는 값
 * 이 문제의 최솟값은? -100 * (10만 - 1)
 * 최대값은 어디서 부터?
 * 문제에서 최댓값을 구하라 -> 최솟값 부터 ~ 최댓값 ret = max(ret, value)
 * 문제에서 최솟값을 구하라 -> 최댓값 부터 ~ 최솟값 ret = min(ret, value)
 */
#include <bits/stdc++.h>
using namespace std;
int n, k, temp, psum[100004], ret = -10000004;
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        psum[i] = psum[i - 1] + temp;
    }
    for (int i = k; i <= n; i++) {
        ret = max(ret, psum[i] - psum[i -k]);
    }
    cout << ret;
}