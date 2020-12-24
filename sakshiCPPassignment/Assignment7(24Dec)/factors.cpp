//WAP to find the factors of a number
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int main()
{int num,sum=0;
cout<<"Enter a number: ";
cin>>num;
for(int i=1;i<=num;i++)
{
    if(num%i==0)
        cout<<i<<endl;
}
return 0;
}
