/**
 * 경우의 수 문제 (경우의 수 = 곱하기)
 * 안 입는 경우도 있기 때문에 각각의 종류마다 + 1
 * 다 안 입는 경우는 없기 때문에 곱한 수에서 -1 
 */
#include<bits/stdc++.h>
using namespace std;
int n, k;
string a, b;
int main() {
    cin >> k;
    while (k--) {
        map<string, int> _map;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            _map[b]++;
        }
        long long ret = 1;
        for (auto m : _map) {
            ret *= ((long long)m.second + 1);
        }
        ret--;
        cout << ret << "\n";
    }
}