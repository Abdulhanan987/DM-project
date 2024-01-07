#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n); 
int gcd(int a, int b); 
int modInverse(int a, int m) ; 
int encrypt(int message, int e, int n);  
int main()
{   
    int p;
    int q;
    int n;
    int e;
    cout<<"Enter first odd prime number p: ";
    cin>>p;
    cout<<"Enter second odd prime number q: ";
    cin>>q;
    if(!isPrime(p) || !isPrime(q) || p%2==0 || q%2==0) 
    {
        cout<<"Both numbers must be odd primes."<<endl;
        return 1;
    }
    n=p*q;
    int phi=(p-1)*(q-1);
    cout<<"Enter an integer e (relatively prime to (p-1)*(q-1)): ";
    cin>>e;
    if(e<=1 || e>=phi || gcd(e, phi)!=1)
    {
        cout<<"Invalid value for e."<<endl;
        return 1;
    }
    int message;
    cout<<"Enter message to encrypt (as a number): ";
    cin>>message;
    int encryptedMsg=encrypt(message, e, n);
    cout<<"Encrypted message: "<<encryptedMsg; 
}
bool isPrime(int n) 
{
    if(n<=1) 
    return false;
    if(n<=3) 
    return true;
    if(n%2==0 || n%3==0)
    return false;
    for(int i=5; i*i<=n; i=i+6)
        if(n%i==0 || n%(i+2)==0)
            return false;
    return true;
}
int gcd(int a, int b) 
{
    if(b==0)
     return a;
    return gcd(b, a%b); 
}
int modInverse(int a, int m) 
{
    int m0=m;
    int t;
    int q;
    int x0=0;
    int x1=1;
    if(m==1)
     return 0;
    while(a>1)
    {
        q=a/m;
        t=m;
        m=a%m;
        a=t;
        t=x0;
        x0=x1-q*x0;
        x1=t;
    }
    if(x1<0)
    x1+=m0;
    return x1;
}

int encrypt(int message, int e, int n) 
{
    return (int)pow(message, e)%n; 
} 