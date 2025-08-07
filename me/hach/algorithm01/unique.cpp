/**
 * unique()
 * unique는 범위 안의 있는 요소 중 앞에서부터 서로를 비교해가며 중복되는 요소를 제거하고
 * 나머지 요소들은 삭제하지 않고 그대로 두는 함수
 * O(n)의 시간복잡도를 가진다.
 */
#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
    for (int i = 1; i <= 5; i++) {
        v.push_back(i);
    }
    for (int i : v) cout << i << " ";
    cout << '\n';
    // 중복되지 않은 요소로 채운 후, 그 다음 이터레이터를 반환
    auto it = unique(v.begin(), v.end());
    cout << it - v.begin() << '\n';
    // 앞에서 부터 중복되지 않게 채운 후 나머지 요소들은 그대로 둔다.
    for (int i : v) cout << i << " ";
    cout << '\n';
    return 0;
}
// map<int, int> mp;
// int main() {
//     vector<int> v = {1, 1, 2, 2, 3, 3};
//     for (int i : v) {
//         if (mp[i]) {
//             continue;
//         } else {
//             mp[i] = 1;
//         }
//     }
    
//     vector<int> ret;
//     for (auto it : mp) {
//         ret.push_back(it.first);
//     }
//     for (int i : ret) {
//         cout << i << " ";
//     }
// }