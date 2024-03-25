// https://www.acmicpc.net/problem/1260

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void bfs(int n)
{
	queue<int> q;
	q.push(n);
	visited[n] = true;
	while (!q.empty())
	{
		int temp = q.front();
		q.pop();
		cout << temp << ' ';
		for (int i = 0; i < graph[temp].size(); i++)
		{
			int next = graph[temp][i];
			if (visited[next] == false)
			{
				q.push(next);
				visited[next] = true;
			}
		}
	}
}

void dfs(int n)
{
	visited[n] = true;		// 방문처리
	cout << n << ' ';
	for (int i = 0; i < graph[n].size(); i++)		// 해당 정점에서 돌기
	{
		int next = graph[n][i];		// 갈 수 있는 것
		if (visited[next] == false)			// 갈 수 있는 정점이 한번도 방문하지 않은 곳이라면
		{
			dfs(next);
		}
	}
}

int main() {
	int n, m, v;		// 정점의 개수, 간선의 개수, 탐색 시작 정점 번호
	cin >> n >> m >> v;
	graph.assign(n + 1, vector<int>(0, 0)); 	// +1 해주는건 0부터가 아니라 1부터 시작할 것이기 때문이고 두번째꺼는 크기가 0이고 초기값이 0인 int 형 백터를 넣어주는 것임.
	visited.assign(n + 1, false);

	int a, b;			// 간선 입력받기
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);		// 양방향 연결
	}
	for (int i = 1; i <= n; i++)
	{
		// 정점 정렬
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(v);
	visited.assign(n + 1, false);
	cout << '\n';
	bfs(v);
}