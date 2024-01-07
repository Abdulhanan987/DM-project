#include<iostream>
using namespace std;
int gcd(int a, int b) ;
int main()
{
    int num1;
    int num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter first number: ";
    cin>>num2;
    int result=gcd(num1, num2);
    cout<<"GCD of "<<num1<<" and "<< num2 << " is: "<<result <<endl;
    
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