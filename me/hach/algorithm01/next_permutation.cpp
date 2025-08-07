//순열(next_permutation)
//순서와 상관 O >> 순열
//순서와 상관 X >> 조합
//문제에서 순서를 재배치하여.. ~ 한 순서의 경우 max 값을 .. >> 순열

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {2, 1, 3, 100, 200};
    sort(a.begin(), a.end());
    do {
        for (int i : a) cout << i << " ";
        cout << '\n';
    } while (next_permutation(a.begin(), a.end()));
}

/**
 * 공식
 * nPr = n! / (n - r)!
 * n개 중에 r개를 뽑는다.
 * 예: 3P2 = 3! / (3 - 2)!
 * 예: 3P1 = 3! / (3 - 1)!
 */