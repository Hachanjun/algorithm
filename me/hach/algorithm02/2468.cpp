/**
 * 백준 2468 안전 영역
 * 내리는 비의 양에 따라 모두 조사 -> 최대 값 뽑기
 * 이하(포함), 미만(포함x)
 * 테스트케이스 마다 새로 시작해야하기 때문에 
 * depth인자 : 높이
 */
#include<bits/stdc++.h>
using namespace std;
int a[101][101], visited[101][101], n, maxH, ret = 1;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
void dfs(int y, int x, int d) {
    visited[y][x] = 1;
    for (int i = 0; i < 4; i ++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
        if (!visited[ny][nx] && a[ny][nx] > d) dfs(ny, nx, d);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            maxH = max(maxH, a[i][j]);
        }
    }

    for (int d = 0; d < maxH; d++) {
        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] > d && !visited[i][j]) {
                    dfs(i, j, d);
                    cnt++;
                }
            }
        }
        ret = max(ret, cnt);
    }
    cout << ret << '\n';
    return 0;
}