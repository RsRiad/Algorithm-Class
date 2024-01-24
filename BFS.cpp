#include <bits/stdc++.h>
using namespace std;

const int lim=200005;
vector<int>adj[lim];
int level[lim];

void bfs(int s)
{
    memset(level,-1,sizeof(level));
    level[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto v : adj[u])
        {
            if (level[v]==-1)
            {
                cout<<v<<" ";
                level[v]=level[u]+1;
                q.push(v);//2
            }
        }
    }
}

int main()
{
    int u,v;
    cin>>u>>v;
    for(int i=0;i<v;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout<<"Visited Vertex : ";
    cout<<1;
    bfs(1);
    return 0;
}
/*
15 14
1 2
1 3
2 4
2 5
3 6
3 7
6 13
6 12
7 15
7 14
5 11
5 10
4 8
4 9

*/
