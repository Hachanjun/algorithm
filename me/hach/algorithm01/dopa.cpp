/**
 * 도파 문자열 다루기
 * 다음과 같이 문자열을 선언했다고 하고 아래의 문제를 풀어보겠습니다.
 * string doma = "umzunsik";
 * Q1. 앞에서 부터 3개의 문자열을 출력하라
 * Q2. 해당 문자열을 거꾸로 해서 출력하라
 * Q3. 거꾸로된 해당 문자열 끝에 "umzunsik"이란 문자열을 추가하라
 */

#include<bits/stdc++.h>
using namespace std;
string dopa = "umzunsik";
void print(string txt) {
    cout << txt << '\n';
}
int main() {
    // Q1
    string dopa2 = dopa.substr(0, 3);
    print(dopa2);
    // Q2
    reverse(dopa2.begin(), dopa2.end());
    print(dopa2);
    //
    dopa2 += dopa;
    print(dopa2);

    return 0;
}