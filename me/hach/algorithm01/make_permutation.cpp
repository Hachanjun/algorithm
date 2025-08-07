/**
 * 순열에서 do while next_permutation 이 생각 안 나면 재귀로 가능하다.
 * 순열은 swap을 해야하는 과정이 있어야 한다.
 */

#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void printV(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void makePermutation(int n, int r, int depth) {
    cout << n << " : " << r << " : " << depth << "\n";
    if (r == depth) {
        printV(v);
        return;
    }
    // depth를 기준으로 i와 swap
    // 원복 예: 1 3 2 -> 1 2 3
    for (int i = depth; i < n; i++) {
        swap(v[i], v[depth]);
        makePermutation(n, r, depth + 1);
        swap(v[i], v[depth]); 
    }
    return;
}

int main() {
    for (int i = 1; i <= 3; i++)  {
        v.push_back(i);
    }
    makePermutation(3, 3, 0);

    return 0;
}