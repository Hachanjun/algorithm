/**
 * 백준 2309 일곱 난쟁이
 * 순서와 상관없다. 9C7(= 9C2) sum = 100
 * 조합으로도 permutation으로도 할 수 있다. 9P7 = 9!/2!
 */
#include <bits/stdc++.h>
using namespace std;
int a[9];
int sum;
vector<int> v;
// 두 개를 넣는 자료 구조 pair
pair<int, int> ret;
// 조합(순서와 관계x)
// void solve() {
//     for (int i = 0; i < 9; i++) {
//         for (int j = 0; j < i; j++) {
//             if (sum - a[i] - a[j] == 100) {
//                 ret = {i, j};
//                 return;
//             }
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     for (int i = 0; i < 9; i++) {
//         cin >> a[i];
//         sum += a[i];
//     }
//     solve();

//     for (int i = 0; i < 9; i++) {
//         if (ret.first == i || ret.second == i) continue;
//         v.push_back(a[i]);
//     }
//     sort(v.begin(), v.end());
//     for (int i : v) {
//         cout << i << " ";
//     }
//     return 0;
// }

// 순열(순서와 관계)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }
    // 순열을 사용할 때는 항상 오름차순으로 정렬
    sort(a, a + 9);
    do {
        for (int i : a) {
            cout << i << " ";
        }
        cout << '\n';
        int sum = 0;
        for (int i = 0; i < 7; i++) {
            sum += a[i];
        }
        if (sum == 100) break;
    } while (next_permutation(a, a + 9)); {
        for (int i = 0; i < 7; i++) {
            cout << a[i] << "\n";
        }
    }
    return 0;
}
