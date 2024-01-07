#include<iostream>
using namespace std;
void calculateDegree(int numedges) ; 
int main()
{
    cout<<"Enter the number of edges: ";
    int numedges;
    cin>>numedges;
    calculateDegree(numedges); 
}
void calculateDegree(int numedges) 
{
    cout<<"Enter the vertex pairs (e.g., 'a b' for an edge between u and v):"<<endl;
    const int index=1000; 
    int degree[index]={0};
    for(int i=0; i<numedges; i++) 
    {
        int u;
        int v;
        cin>>u;
        cin>>v;
        degree[u]++;
        degree[v]++;  
    }
    cout<<"Vertex Degrees:"<<endl; 
    for(int i=0; i<=2*numedges; i++)   
    {
        if(degree[i]>0)  
        {
            cout<<"Vertex "<<i<<": "<<degree[i]<<" degree(s)"<<endl;    
        }  
    }  
}  