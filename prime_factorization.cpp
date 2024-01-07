#include<iostream>
using namespace std;
void primefactors(int n) ;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Prime factors are: ";
    primefactors(num);
    
}
void primefactors(int n) 
{
    while(n%2==0)
    {
        cout<<2<<", ";
        n=n/2;
    }
    for(int i=3; i*i<=n; i=i+2)
    {
        while(n%i==0) 
        {
            cout<<i<<", ";
            n=n/i;
        }
    }
    if(n>2)
        cout<<n<<" ";
}
