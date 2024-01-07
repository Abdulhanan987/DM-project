#include<iostream>
using namespace std;
void calculateDegrees(int numedges); 
int main()
{
    int numedges; 
    cout<<"Enter the number of edges: "; 
    cin>>numedges; 
    cout<<"Enter the vertex pairs (e.g., 'u v' for an edge from u to v):"<<endl; 
    calculateDegrees(numedges); 
}

void calculateDegrees(int numedges) 
{
    const int index=1000;
    int inDegree[index]={0};
    int outDegree[index]={0};

    for(int i=0; i<numedges; i++)
    {
        int u;
        int v;
        cin>>u;
        cin>>v;
        outDegree[u]++;
        inDegree[v]++;
    }
    cout<<"Vertex In-Degrees and Out-Degrees:"<<endl;
    for(int i=0; i<index; i++)
    {
        if(inDegree[i]>0 || outDegree[i]>0)
        {
            cout<<"Vertex "<<i<<": In-Degree="<<inDegree[i]<<", Out-Degree="<<outDegree[i]<<endl;
        }
    }
}