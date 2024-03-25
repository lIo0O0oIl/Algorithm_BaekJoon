// https://www.acmicpc.net/problem/1260

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

void dfs(int n)
{

}

void bfs(int n)
{
	visited[n] = true;		// �湮ó��
	cout << n << ' ';
	for (int i = 0; i < graph[n].size(); i++)		// �ش� �������� ����
	{
		int next = graph[n][i];		// �� �� �ִ� ��
		if (visited[next] == false)			// �� �� �ִ� ������ �ѹ��� �湮���� ���� ���̶��
		{
			bfs(next);
		}
	}
}

vector<vector<int>> graph;
vector<bool> visited;

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
	for (int i = 0; i < n; i++)
	{
		// ���� ����
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(v);
	cout << '\n';
	bfs(v);
}

// ������ ���ĵǾ� ��.