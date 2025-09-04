/**
 * 1로만 이루어진 수 중 n의 배수
 * 배수 : 4 % 2 == 0
 * 가장 작은 n의 자리수 ex: 111 % 3 == 0 -> 1 1 1 -> 3(자리수)
 * 모듈러 연산 : 연산 후에 모듈러 연산을 하는 것과, 각 수에 먼저 모듈러 연산을 하고 난뒤 연산하는 것이 결과적으로 동일하다.
 * ex: (A + B) mod C = ((A mod C) + (b mod C)) mod C -> (A + B) % C = ((A % C) + (b % C)) % C
 * 1로 이루어진 수를 미리 만들고 그 수를 나눈다. ex: 전수 * 10 + 1 -> 1 * 10 + 1
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main() {
    // 입력을 계속 받는다.
    while (scanf("%d", &n) != EOF) {
        ll cnt = 1, ret = 1;
        while (true) {
            if (cnt % n == 0) {
                printf("%lld\n", ret);
                break;
            } else {
                // long long을 벗어나는 수가 만들어지기 때문에
                cnt = (cnt * 10) + 1;
                // 모듈러 연산을 적용
                cnt %= n;
                ret++;
            }
        }
    }
    return 0;
}