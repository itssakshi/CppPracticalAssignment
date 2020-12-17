//to display the season when user enters the month using switch case
#include <bits/stdc++.h>
using namespace std;
int main()
{int mon;
cout<<"Enter the month(1-12): ";
cin>>mon;
switch(mon)
{
    case 11:
    case 12:
    case 1:
        cout<<"Winter..";
        break;
    case 2:
    case 3:
    case 4:
        cout<<"Spring..";
        break;
    case 5:
    case 6:
    case 7:
        cout<<"Summer..";
        break;
    case 8:
    case 9:
    case 10:
        cout<<"Autumn..";
        break;
    default:cout<<"Bogus month..";
        break;
}

return 0;
}
