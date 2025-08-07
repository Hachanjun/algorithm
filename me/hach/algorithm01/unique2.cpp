/**
 * unique()
 * unique는 범위 안의 있는 요소 중 앞에서부터 서로를 비교해가며 중복되는 요소를 제거하고
 * 나머지 요소들은 삭제하지 않고 그대로 두는 함수
 * O(n)의 시간복잡도를 가진다.
 */
#include<bits/stdc++.h>
using namespace std;
vector<int> v {2, 2, 1, 1, 2, 2, 3, 3, 4, 5, 6, 7, 8, 9};
int main() {
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i : v) cout << i << " ";
    cout << '\n';
    
    return 0;
}
