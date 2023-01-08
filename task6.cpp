#include <iostream>
using namespace std;
string ones(int number);
string tens(int number);

main ()
{ 
    int number ;
    cout <<"Enter number: "
    cin>>number;
    int a=number/10;
    int b=number%10;
    tens(a);
    ones(b);
    
}

string ones(int number)
{
    
    if(number == 1)
    {
        cout<<"one"<<endl;
    }
    if(number == 2)
    {
        cout<<"two"<<endl;
    }
    if(number == 3)
    {
        cout<<"three"<<endl;
    }
    if(number == 4)
    {
        cout<<"four"<<endl;
    }
    if(number == 5)
    {
        cout<<"five"<<endl;
    }
    if(number == 6)
    {
        cout<<"six"<<endl;
    }
    if(number == 7)
    {
        cout<<"seven"<<endl;
    }
    if(number == 8)
    {
        cout<<"eight"<<endl;
    }
    if(number == 9)
    {
        cout<<"nine"<<endl;
    }
    return "0";
}
string tens(int number)
{
    if(number == 2)
    {
        cout<<"twenty";
    }
    if(number == 3)
    {
        cout<<"thirty";
    }
    if(number == 4)
    {
        cout<< "forty";
    }
    if(number == 5)
    {
        cout<< "fifty";
    }if(number == 6)
    {
        cout<< "sixty";
    }
    if(number == 7)
    {
        cout<< "seventy";
    }
    if(number == 8)
    {
        cout<< "eighty";
    }
    if(number == 9)
    {
        cout<< "twenty";
    }
    return "0";
}


