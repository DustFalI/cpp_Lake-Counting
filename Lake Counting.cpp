#include <bits/stdc++.h>
using namespace std;
int n, m, ans = 0;
int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1}, dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};//偏移变量
char arr[105][105];
bool mark[105][105] = {0};//标记数组
struct point//创建一个struct方便管理，直接将x，y坐标用一个变量存储
{
	int x, y;
};
queue<point> q;//队列
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
		for(int j = 1; j <= m; j++)//遍历整个地图
		{
			if(arr[i][j] == 'W' && mark[i][j] == 0)//在地图中查找
			{
				ans++;
				mark[i][j] = 1;//标记已访问
				
				q.push(point{i,j});//将该点坐标存入队列
				while(!q.empty())//开始对每个点八向操作
				{
					point p = q.front();//取出队首
					q.pop();//队首出队
					for(int k = 0; k < 8; k++)//对该位置进行八个方向遍历
					{
						int x = p.x + dx[k], y = p.y + dy[k];//查找的坐标
						if(x < 0 || y < 0 || x > n || y > m) continue;//不符合条件跳过
						if(arr[x][y] == 'W' && mark[x][y] == 0)
						{
							mark[x][y] = 1;//标记已访问
							q.push(point{x,y});//将坐标存入
							//后面就是对该点的其他方向判定，符合就存入
						}
					}
					//到这里就代表该点已经找完了八个方向，开始对队列的下一个坐标进行八向遍历查找
				}
			}
		}
	}
	cout << ans;
	return 0;
}
