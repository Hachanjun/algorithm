/**
 * 곱셈
 * 각각의 수가 20억이기 때문에 for문으로는 안 된다.
 * 곱한 값을 변수에 저장 후 그 값을 곱하는 방식
 * go(2, 64) -> go(2, 32) -> go(2, 16) -> go(2, 8) -> go(2, 4) -> go(2, 2) -> go(2, 1)
 * 64승은 32승 * 32승 ...
 * 다 곱하고 나누면 overflow가 일어난다.
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c;

ll go(ll a, ll b) {
    if (b == 1) {
        return a % c;
    }
    ll ret = go(a, b / 2);
    // 자주 나눠서 overflow 방지
    ret = (ret *ret) % c;
    // c++에서 0은 false 이외의 수는 true를 반환한다. 홀수이면 a를 한 번 더 곱한다.(a의 1승)
    if (b % 2) {
        ret = (ret * a) % c;
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;
    cout << go(a, b) << "\n";

    return 0;
}