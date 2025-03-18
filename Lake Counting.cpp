#include <bits/stdc++.h>
using namespace std;
int n, m, ans = 0;
int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1}, dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
char arr[105][105];
bool mark[105][105] = {0};
struct point
{
	int x, y;
};
queue<point> q;
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> arr[i][j];
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(arr[i][j] == 'W' && mark[i][j] == 0)
			{
				ans++;
				mark[i][j] = 1;
				
				q.push(point{i,j});
				while(!q.empty())
				{
					point p = q.front();
					q.pop();
					for(int k = 0; k < 8; k++)
					{
						int x = p.x + dx[k], y = p.y + dy[k];
						if(x < 0 || y < 0 || x > n || y > m) continue;
						if(arr[x][y] == 'W' && mark[x][y] == 0)
						{
							mark[x][y] = 1;
							q.push(point{x,y});
						}
					}
				}
			}
		}
	}
	cout << ans;
	return 0;
}
