#include <bits/stdc++.h>
using namespace std;
const int n =4;
const int INF=1e9;
void Floyd(int graph[n][n])
{
    int matrix[n][n],i,j,k;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            matrix[i][j]=graph[i][j];
    for(k=0; k<n; k++)
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                if(matrix[i][k]+matrix[k][j]<matrix[i][j])
                    matrix[i][j]=matrix[i][k]+matrix[k][j];
            }

    for(i=0; i<n; i++)
    {
        int sum=0;
        for(j=0; j<n; j++)
        {
            if(matrix[i][j]==INF) continue;
            else
                sum+=matrix[i][j];
        }
        cout<<"Average Cost:"<<i+1<<":"<<sum/n<<endl;
    }

}
int main()
{
    int graph[n][n]= {{0,3,INF,5},
        {2,0,INF,4},
        {INF,1,0,INF},
        {INF,INF,2,0}
    };
    Floyd(graph);
}

