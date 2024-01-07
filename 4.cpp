#include<iostream> 
using namespace std; 
const int index=100;  
void constructAdjacencyMatrix(int numedges, bool isdirected) ;
int main() 
{
    int numedges;  
    cout<<"Enter the number of edges: ";  
    cin>>numedges;   
    bool isdirected;  
    cout<<"Is the graph directed? (1 for yes, 0 for no): ";   
    cin>> isdirected;   
    cout<<"Enter the vertex pairs (e.g., 'u v' for an edge between u and v):" << endl;  
    constructAdjacencyMatrix(numedges, isdirected);  
    return 0;
}
void constructAdjacencyMatrix(int numedges, bool isdirected) 
{   
    int adjMatrix[index][index]={0};
    for (int i=0; i<numedges; i++) 
    {
        int u;
        int v; 
        cin>>u;
        cin>>v;
        if(isdirected)  
        { 
            adjMatrix[u][v]++;   
        }  
        else 
        {  
            adjMatrix[u][v]++;  
            adjMatrix[v][u]++;  
        }  
    }
    cout<<"Adjacency Matrix:"<<endl;   
    for (int i=0; i<2*numedges; i++)  
    {
        for (int j=0; j<2*numedges; j++) 
        {
            cout<<adjMatrix[i][j]<<" "; 
        }
        cout<<endl; 
    }  
}