/*WAP to compute sum of first n terms of the series
  1-2+3-4+5-6.....n */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int main()
{int num,sum=0;
cout<<"Enter a number: ";
cin>>num;
for(int i=1;i<=num;i++)
{
    if(num%2==0)
        sum-=i;
    else
        sum+=i;
}
cout<<"Sum of the series is: "<<sum;
return 0;
}
