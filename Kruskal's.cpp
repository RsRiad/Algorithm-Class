#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int parent[N], siz[N];

void make(int v)
{
    parent[v] = v;
    siz[v] = 1;
}

int find(int v)
{
    if (parent[v] == v) return v;
    parent[v] = find(parent[v]);
    return  parent[v];
}

void unione(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (siz[a] < siz[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        siz[a] += siz[b];
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({wt, {u, v}});
    }

    sort(edges.begin(), edges.end());

    for (int i = 0; i <= n; i++) make(i);


    int total_cost = 0;

    for (auto &it : edges)
    {
        int wt = it.first;
        int u = it.second.first;
        int v = it.second.second;
        if (find(u) == find(v))continue;

        unione(u, v);
        total_cost += wt;
        cout << u << " " << v << endl;
    }
    cout << "total cost: " << total_cost;

    return 0;
}
