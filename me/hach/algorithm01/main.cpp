/**
 * 문제2 오름차순과 평균값
 * 숫자로 이루어진 배열이 주어졌을 때, 배열의 요소들을 오름차순으로 정렬하고, 배열의 평균값을 계산하는 프로그램을 작성하세요.
 * 입력
 * 첫 번째 줄에 배열의 크기 N (1 <= N <= 100)이 주어집니다. 두 번째 줄에 N개의 정수가 주어집니다.
 * 각 정수는 -1000이상 1000이하입니다.
 * 출력
 * 첫 번째 줄에 정렬된 배열을 출력하고, 두 번째 줄에 배열의 평균값을 출력하세요.
 * 평균값은 소수점 두 번째 자리까지 출력하세요.
 */
#include<bits/stdc++.h>
using namespace std;
int n, temp;
vector<int> v;
int main() {
    cin >> n;
    double b = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        b += temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for (int i : v) cout << i << " ";
    cout  << '\n';
    cout << fixed << setprecision(2) << (b / n) << '\n';

    return 0;
}