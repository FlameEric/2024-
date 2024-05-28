#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n, m, a, b;
struct g {
	int x, y;
};
int vis[30][30];
char map[30][30];
int ans;
int dx[] = { 0,0,1,-1,1,-1,1,-1 };
int dy[] = { 1,-1,1,-1,-1,1,0,0 };
void dfs(g t) {
	int cnt = 4;
	if (vis[t.x][t.y]) return;
	vis[t.x][t.y] = 1;
	for(int i = 0;i < 8;i++)  {
		g p;
		p.x = t.x + dx[i];
		p.y = t.y + dy[i];
	
		if (p.x<1 || p.y<1 || p.x>m || p.y>n) continue;
		if (map[p.x][p.y] != 'X') continue;
		dfs(p);
		if (dx[i] == 0 || dy[i] == 0) cnt--;
	}
	ans += cnt;
}
int main() {
	while (cin >> m >> n >> a >> b && (m || n || a || b)) {
		for (int i = 1;i <= m;i++) {
			for (int j = 1;j <= n;j++) cin >> map[i][j];
		}
		memset(vis, 0, sizeof(vis));
		ans = 0;
		g start;
		start.x = a;start.y = b;
		dfs(start);
		cout << ans << endl;
	}
	return 0;
}
