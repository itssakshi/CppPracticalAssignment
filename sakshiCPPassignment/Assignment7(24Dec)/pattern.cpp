/*WAP to print this pattern
***********
*********
*******
*****
***
*  */
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int main()
{int i,j;
for(i=11;i>=1;i-=2)
{
    for(j=1;j<=i;j++)
    cout<<'*';
    cout<<endl;
}
return 0;
}
