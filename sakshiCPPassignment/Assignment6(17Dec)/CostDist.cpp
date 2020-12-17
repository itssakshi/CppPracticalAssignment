//to display cost as per given distance
#include <bits/stdc++.h>
using namespace std;
int main()
{int dist;
double cost;
cout<<"Enter value of distance: ";
cin>>dist;
if(dist>0&&dist<=100)
    cost=5.0;
else if(dist>100&&dist<=500)
    cost=8.0;
else if(dist>500&&dist<=1000)
    cost=10.0;
else
    cost=12.0;
cout<<"Cost is: "<<cost;
return 0;
}
