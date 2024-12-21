// https://www.acmicpc.net/problem/11724

#include <iostream>
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

int main() {
	int n, m;		// 정점의 개수, 간선의 개수
	cin >> n >> m;
	graph.assign(n + 1, vector<int>(0)); 	
	visited.assign(n + 1, false);

	int a, b;			// 간선 입력받기
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);		// 양방향 연결
	}

	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] != true)
		{
			count++;
			bfs(i);
		}
	}
	cout << count;
}