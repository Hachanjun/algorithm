/**
 * 조합
 * 조합에는 "순서"가 없다. 그저 몇 명을 뽑아서 갈 것이가를 쓸 때 조합을 사용한다.
 * 순서 상관없고 오로지 몇 명을 "다양하게" 뽑을 때 사용하는 것
 * 공식
 * nCr = n! / r!(n - r)!
 */ 
// 1. 재귀함수
#include<bits/stdc++.h>
using namespace std;
int n = 5;
int k = 3;
// int a[] = {1, 2, 3, 4, 5};

void print(vector<int> b) {
    for (int i : b) {
        cout << i << " ";
    }
    cout << '\n';
}

void combi(int start, vector<int> b) {
    if (b.size() == k) {
        print(b);
        return;
    }
    for (int i = start + 1; i < n; i++) {
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main() {
    vector<int> b;
    combi(-1, b);
    return 0;
}