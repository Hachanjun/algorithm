/**
 * 프로그램을 실행 시키고 wow 라고 입력하면 wow가 출력되는 프로그램
 */

// 헤더파일을 include시키다. bits/stdc++.h는 C++의 모든 표준 라이브러리가 포함된 헤더파일이다. 이를 include라는 지시문을 통해 이 프로그램에 포함시킨다라는 의미
#include <bits/stdc++.h>
/**
 * std 라는 네임스페이스를 사용한다. 네임스페이스란 많은 라이브러리를 불러서 사용하다 보면 변수명 중복이 발생할 수 있는데 이를 방지하기 위해서 변수명에 범위를 걸어놓는 것을 의미한다.
 * cin이나 cout 등을 사용할 때 원래는 std라는 네임스페이스를 통해 std::cin 이렇게 호출을 해야 하는데 std를 기본으로 설정해서 cin, cout으로 호출할 수 있게 한다.
 */
using namespace std;
string a;
int main() {
    // 변수 a를 입력받다. 대표적으로 입력함수로는 cin, scanf가 있다.
    cin >> a;
    // 변수 a를 출력한다. 대표적으로 출력함수로는 cout, printf가 있다.
    cout << a << "\n";
    // main 함수를 종료시키는 return 0;
    return 0;
}