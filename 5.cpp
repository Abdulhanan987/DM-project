#include <iostream>
using namespace std;
const int index=10 ;
void countedges(int adjacencyMatrix[index][index], int nodes);
int main() 
{
    int nodes;
    cout<<"Enter the number of nodes: ";
    cin>>nodes;
    int adjacencymatrix[index][index];
    cout<<"Enter the adjacency matrix: "; 
    for (int i=0; i<nodes; i++) 
    {
        for (int j=0; j<nodes; j++) 
        {
            cin>>adjacencymatrix[i][j];
        }
    }
    countedges(adjacencymatrix, nodes);
    
}
void countedges(int adjacencymatrix[index][index], int nodes) 
{
    int edgeCount[index][index]={0};
    for (int i=0; i<nodes; i++) 
    {
        for (int j=0; j<nodes; j++) 
        {
            if (adjacencymatrix[i][j]>0) 
            {
                edgeCount[i][j]++;
            }
        }
    }
    cout<<"Edges:"<<endl;
    for(int i=0; i<nodes; i++) 
    {
        for(int j=i+1; j<nodes; j++) 
        {     edgeCount[i][j]=adjacencymatrix[i][j];
            if(edgeCount[i][j]>0) 
            {
                cout<<i<<" - "<<j<<": "<<edgeCount[i][j]<<" times"<<endl; 
            }
        }
    }
}