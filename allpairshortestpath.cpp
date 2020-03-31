#include<iostream>
using namespace std;
#define v 4
#define N 99999
int min(int a,int b)
{
	if(a>b)
	return b;
	else
	return a;
}
void floyd(int graph[][v])
{
for(int k=1;k<v;k++)
for(int i=0;i<v;i++)
for(int j=0;j<v;j++)
graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
}
void print(int graph[][v])
{
  for (int i = 0; i < v; i++)  
    {  
        for (int j = 0; j < v; j++)  
        {  
            if (graph[i][j] == N)  
                cout<<"N"<<"     ";  
            else
                cout<<graph[i][j]<<"     ";  
        }  
        cout<<endl;  
    }  
}
int main()
{
	 int graph[v][v] = { {0, 5, N, 10},  
                        {N, 0, 3, N},  
                        {N, N, 0, 1},  
                        {N, N, N, 0}  
                    };   
    floyd(graph); 
	print(graph); 
    return 0;  
}  

