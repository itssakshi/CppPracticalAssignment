#include <bits/stdc++.h>
using namespace std;
int main()
{int a,b,c;
cout<<"enter three no:\n";
cin>>a>>b>>c;
if(a>b)
    if(a>c)
        cout<<"greatest no is: "<<a;
    else
        cout<<"greatest no is: "<<c;
if(b>a)
    if (b>c)
        cout<<"greatest no is: "<<b;
    else
        cout<<"greatest no is: "<<c;
return 0;
}
