#include<iostream>
#include<string.h>
using namespace std;
 
char map[10][10];
int di, dj;//门的出生点
int T;
bool flag;
int dir[4][2] = { { -1, 0 }, { 1, 0 }, { 0, 1 }, { 0, -1 } };
 
void dfs(int curr_x, int curr_y, int cnt)
{
	if (curr_x == di && curr_y == dj && cnt == T)
	{
		flag = true;
		return;
	}
 
	for (int i = 0; i < 4; i++)
	{
		int xx = curr_x + dir[i][0];
		int yy = curr_y + dir[i][1];
		if (map[xx][yy] != 'X')
		{
			map[curr_x][curr_y] = 'X';
			dfs(xx,yy,cnt+1);
		}
		//回退
		map[curr_x][curr_y] = '.';
	}
}
 
int main()
{
 

	int N, M;
	int si, sj;
	while (1)
	{
		cin >> N >> M >> T;
		memset(map,'X',sizeof(map));
		flag = false;
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= M; j++)
			{
				cin >> map[i][j];
				if (map[i][j] == 'S')
				{
					si = i; sj = j;
				}
				else if (map[i][j] == 'D')
				{
					di = i; dj = j;
				}
			}
		}
		map[si][sj] = 'X';
		dfs(si,sj,0);
		if (N == 0 && M == 0 && T == 0)
			break;
 
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
 
	return 0;
}
