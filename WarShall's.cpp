#include <bits/stdc++.h>
using namespace std;
#define V 4
#define INF 99999

int graph[V][V] =
    {
        { 0, 3, INF, 7  },
        { 8, 0, 2, INF },
        { 5, INF, 0, 1   },
        { 2, INF, INF, 0   }
    };

void floydWarshall(int dist[][V])
{
    for (int k=0;k<V;k++)
    {
        for (int i=0;i<V;i++)
        {
            for (int j=0;j<V;j++)
            {
                if (dist[i][j] > (dist[i][k] + dist[k][j]))// && (dist[k][j] != INF && dist[i][k] != INF))
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

}
int main()
{
    floydWarshall(graph);
    cout << "Shortest distances\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (graph[i][j] == INF)cout << "INF"<< "\t";
            else cout<<graph[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
