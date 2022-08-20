#include <bits/stdc++.h>

using namespace std;
int T;
void BFS(vector<int> graph[], int visit[], int k)
{
    queue<int> gg;
    gg.push(k);
    visit[k] = 1;
    while (!gg.empty())
    {
        int v = gg.front();
        for (int i = 0; i < graph[v].size(); i++)
        {
            int x = graph[v][i];
            if (visit[x] == 0)
            {
                gg.push(x);
                visit[x] = visit[v] + 1;
            }
        }
        gg.pop();
    }
}
int main()
{
    cin >> T;
    int n, m;
    int a, b;
    for (int i = 1; i <= T; i++)
    {
        vector<int> graph[100001];
        int visit[100001];
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        for (int i = 1; i <= n; i++)
            visit[i] = 0;
        int dem = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!visit[i])
                BFS(graph, visit, 1), dem++;
        }
        if (dem == 1)
        {
            int flag = 1;
            for (int i = 1; i <= n; i++)
            {
                if (graph[i].size() == 1)
                    flag = 0;
            }
            cout << flag << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}