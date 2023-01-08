#include <iostream>
using namespace std;

main()
{
int hour;
int minute;
int timeafter15mins;


cout<<"Enter your hour";
cin>>hour;
cout<<"Enter your minute";
cin>>minute;

timeafter15mins = minute + 15;

    if(timeafter15mins >= 60)
    {
        hour = hour + 1;
        minute = timeafter15mins - 60;
    }
    if (hour >= 24)
    {
        hour = hour - 24; 
    }
    cout<<hour<< ":" << timeafter15mins<<endl;
}