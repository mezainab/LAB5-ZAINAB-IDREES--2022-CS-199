#include <iostream>
using namespace std;
bool symmetric(int number);
main () 
{
bool condition;
int number;
int digit3;
int digit1;

cout<<"Enter the number: ";
cin>>number;

condition = symmetric(number);
if (condition == true)
{
    cout<<"Your number is symmetric"<<endl;
}
if (condition == false)
{
    cout<<"Your number is not symmetric"<<endl;
}
}
bool symmetric(int number)
{
int digit3;
int digit1;

digit3 = number%10;
digit1 = number/100;

if (digit1 == digit3)
{
    return true;
}
if (digit1 != digit3)
{
    return false;
}
return 0;
}