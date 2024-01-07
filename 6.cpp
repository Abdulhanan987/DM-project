#include <iostream>
using namespace std;
const int MAX_VERTICES = 100;
const int MAX_EDGES = 100 ;
void createIncidenceMatrix(int vertices, int edges, int edgeList[][2], int edgeFrequency[]);
int main()
{
    int vertices;
    int edges;
    cout<<"Enter the number of vertices: ";
    cin>>vertices;
    cout<<"Enter the number of edges: ";
    cin>>edges;
    int edgeList[MAX_EDGES][2];
    int edgeFrequency[MAX_EDGES];
    cout<<"Enter the vertex pairs and frequency of each edge:\n";
    for(int i=0; i<edges; i++)
    {
        cin>>edgeList[i][0];
        cin>>edgeList[i][1];
        cin>>edgeFrequency[i];
    }
    createIncidenceMatrix(vertices, edges, edgeList, edgeFrequency);
    
}
void createIncidenceMatrix(int vertices, int edges, int edgeList[][2], int edgeFrequency[]) 
{
    int incidenceMatrix[MAX_VERTICES][MAX_EDGES]={0};
    for (int i=0; i<edges; i++)
    {
        int vertex1=edgeList[i][0];
        int vertex2=edgeList[i][1]; 
        incidenceMatrix[vertex1][i]=edgeFrequency[i];
        incidenceMatrix[vertex2][i]=edgeFrequency[i];
    }
    cout<<"Incidence Matrix: "<<endl;
    for(int i=0; i<vertices; i++)
    {
        for(int j=0; j<edges; j++)
        {
            cout<<incidenceMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}