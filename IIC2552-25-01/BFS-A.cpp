#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
 
int bfs(const vector<string>& map, pair<int, int> start, int n, int m) {
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int, int>> q;
    int dx[] = {-1, 1, 0, 0}; 
    int dy[] = {0, 0, -1, 1};
 
    q.push(start);
    dist[start.first][start.second] = 0;
 
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
 
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
 
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if ((map[nx][ny] == '.' || map[nx][ny] == 'B') && dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
 
                    if (map[nx][ny] == 'B') {
                        return dist[nx][ny];
                    }
                }
            }
        }
    }
 
    return -1;
}
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<string> map(n);
    pair<int, int> start;
 
    for (int i = 0; i < n; i++) {
        cin >> map[i];
        for (int j = 0; j < m; j++) {
            if (map[i][j] == 'A') {
                start = {i, j};
            }
        }
    }
 
    cout << bfs(map, start, n, m) << endl;
 
    return 0;
}