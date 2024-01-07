#include<iostream>
using namespace std;
int gcd(int a, int b);
int lcm(int a, int b) ;
int main()
{
    int num1;
    int num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter first number: ";
    cin>>num2;
    int result=lcm(num1, num2);
    cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<result;
    return 0;
}
int gcd(int a, int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcm(int a, int b) 
{
    return(a*b)/gcd(a, b);
}