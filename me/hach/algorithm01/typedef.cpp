/**
 * typedef를 통해 타입의 이름을 새로이 별칭으로 정의하고 실제 타입 이름 대신 별칭으로 사용할 수 있다.
 * 이를 통해 C++에서 이미 정의된 타입 또는 사용자가 정의한 타입 (struct 또는 class) 보다 더 짧거나 의미있는 이름을 지을 수 있다.
 * 사용 법 : typedef <타입> <별칭>
 */

 #include<bits/stdc++.h>
 using namespace std;
 typedef int i;
 int main() {
    i a = 1;
    cout << a << "\n";
    return 0;
 }