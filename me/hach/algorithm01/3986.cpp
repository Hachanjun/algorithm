/**
 * 좋은 단어
 * 문제에 짝짓기, 폭발과 같은 단어가 있다면 stack을 생각하자
 */
#include<bits/stdc++.h>
using namespace std;
int n, cnt;
string s;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        stack<char> st;
        for (char c : s) {
            if (st.size() && st.top() == c) {
                st.pop();
            } else {
                st.push(c);
            }
        }
        if (st.size() == 0) cnt++;
    }
    cout << cnt << "\n";
}

