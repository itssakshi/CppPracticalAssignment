//to build a simple calculator
#include <bits/stdc++.h>
using namespace std;
int main()
{float a,b,res;
char ch;
cout<<"enter two no:\n";
cin>>a>>b;
cout<<"enter one operator(+,-,*,/)";
cin>>ch;
switch(ch)
{
    case '+':cout<<"Sum of given two numbers is: "<<a<<"+"<<b<<"="<<a+b;
            break;
    case '-':cout<<"Subtraction of given two numbers is: "<<a<<"+"<<b<<"="<<a-b;
            break;
    case '*':cout<<"Multiplication of given two numbers is: "<<a<<"+"<<b<<"="<<a*b;
            break;
    case '/':cout<<"Division of given two numbers is: "<<a<<"+"<<b<<"="<<a/b;
            break;
    default:
            cout<<"Wrong Operator!!";
            break;

}
return 0;
}
