//to implement flowchart using if-else
#include <bits/stdc++.h>
using namespace std;
int main()
{int x,y;
float z;
cout<<"enter values of x and y: ";
cin>>x>>y;
if(x>0)
{   if(y>0)
       {
        z=x;
        y=x+1;
       }
    else
        z=y;
        z=z+1;
}
else
    {y=x-1;
    z=2*x;
    }
cout<<x<<"\n"<<y<<"\n"<<z;
return 0;
}
