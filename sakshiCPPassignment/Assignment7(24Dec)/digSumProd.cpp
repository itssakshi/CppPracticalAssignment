//WAP to print the sum and product of digits of given number
#include <bits/stdc++.h>
using namespace std;
int main()
{int num,prod=1,sum=0,dig;
cout<<"Enter a number: ";
cin>>num;
while(num)
{
    dig=num%10;
    sum+=dig;
    prod*=dig;
    num/=10;

}
cout<<"product of digits is: "<<prod<<endl<<"Sum of digits is: "<<sum;
return 0;
}
