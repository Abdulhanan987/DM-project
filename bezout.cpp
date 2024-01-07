#include <iostream>
using namespace std;
int extendedGCD(int a, int b, int &x, int &y) ;
int main() 
{
    int num1; 
    int num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter first number: ";
    cin>>num2;
    int x;
    int y;
    extendedGCD(num1, num2, x, y);
    cout<<"Bezout coefficients of "<<num1<<" and "<<num2<<" are: "<<x<<" and "<<y;

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