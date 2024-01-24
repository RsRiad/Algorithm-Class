#include <bits/stdc++.h>
using namespace std;

const int lim=100;
vector<int>adj[lim];
bool visit[lim];

void dfs(int vertex)//1
{
    visit[vertex]=true;//visit[1]=true;
    cout<<vertex<<" ";
    for(auto child : adj[vertex]){
        if(visit[child]==false){
            dfs(child);
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
    cout<<"Visited Vertex: ";
	dfs(1);
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
