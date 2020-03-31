#include<bits/stdc++.h> 
using namespace std; 
  
#define N 8 
#define INF INT_MAX 
int shortestDist(int graph[N][N]) { 
    int dist[N]; 
  
    dist[N-1] = 0; 
    for (int i = N-2 ; i >= 0 ; i--) 
    {
        dist[i] = INF; 
        for (int j = i ; j < N ; j++) 
        {  
            if (graph[i][j] == INF) 
                continue; 
            dist[i] = min(dist[i], graph[i][j] + 
                                        dist[j]); 
        } 
    } 
  
    return dist[0]; 
}  
int main() 
{
      int graph[N][N] = 
      {{INF, 25, 2, 5, INF, INF, INF, INF}, 
       {INF, INF, INF, INF, 25, 11, INF, INF}, 
       {INF, INF, INF, INF, 9, 1, 16, INF}, 
       {INF, INF, INF, INF, INF, INF, 2, INF}, 
       {INF, INF, INF, INF, INF, INF, INF, 18}, 
       {INF, INF, INF, INF, INF, INF, INF, 13}, 
       {INF, INF, INF, INF, INF, INF, INF, 2}}; 
  
    cout << shortestDist(graph); 
    return 0; 
} 

