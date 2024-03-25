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
	visited[n] = true;		// �湮ó��
	cout << n << ' ';
	for (int i = 0; i < graph[n].size(); i++)		// �ش� �������� ����
	{
		int next = graph[n][i];		// �� �� �ִ� ��
		if (visited[next] == false)			// �� �� �ִ� ������ �ѹ��� �湮���� ���� ���̶��
		{
			dfs(next);
		}
	}
}

int main() {
	int n, m, v;		// ������ ����, ������ ����, Ž�� ���� ���� ��ȣ
	cin >> n >> m >> v;
	graph.assign(n + 1, vector<int>(0, 0)); 	// +1 ���ִ°� 0���Ͱ� �ƴ϶� 1���� ������ ���̱� �����̰� �ι�°���� ũ�Ⱑ 0�̰� �ʱⰪ�� 0�� int �� ���͸� �־��ִ� ����.
	visited.assign(n + 1, false);

	int a, b;			// ���� �Է¹ޱ�
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);		// ����� ����
	}
	for (int i = 1; i <= n; i++)
	{
		// ���� ����
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(v);
	visited.assign(n + 1, false);
	cout << '\n';
	bfs(v);
}