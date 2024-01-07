#include<iostream>
using namespace std;
int extendedGCD(int a, int b, int &x, int &y); 
int modInverse(int a, int b) ;
int main()
{
    int a;
    int b;
    cout<<"Enter first prime number a: ";
    cin>>a;
    cout<<"Enter second prime number b: ";
    cin>>b;
    int inverse=modInverse(a, b);
    if(inverse!=-1)
    {
        cout<<"Modular inverse of "<<a<<" modulo "<<b<<" is: "<<inverse;
    }
    return 0;
}
int extendedGCD(int a, int b, int &x, int &y) 
{
    if(a==0) 
    {
        x=0;
        y=1;
        return b;
    }
    int x1;
    int y1;
    int gcd=extendedGCD(b%a, a, x1, y1);
    x=y1-(b/a)*x1;
    y=x1;
    return gcd;
}
int modInverse(int a, int b)
{
    int x;
    int y;
    int gcd=extendedGCD(a, b, x, y);
    if(gcd!=1)
    {
        cout<<"Modular inverse does not exist."<<endl;
        return -1;
    }
    else 
    {
        x=(x%b+b)%b;
        return x;
    }
}