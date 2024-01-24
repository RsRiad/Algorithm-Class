#include <bits/stdc++.h>
using namespace std;

const int lim=2005;
vector<int>adj[lim];
bool visited[lim];
vector<int>ans;
int t,n,m;

void dfs(int vertex)
{
    visited[vertex]=true;
    for(auto child : adj[vertex]){
        if(visited[child]==false){
            dfs(child);
        }
    }
    ans.push_back(vertex);
}
void topological_sort()
{
    for (int i = 0; i <n; ++i){
        if (!visited[i])
            dfs(i);
    }
    reverse(ans.begin(), ans.end());
    cout<<"Sorted : ";
    for(auto p:ans)cout<<p<<" ";
}
int main()
{
    ans.clear();
    cin>>n>>m;
1
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    topological_sort();

}
//directed acyclic graph

