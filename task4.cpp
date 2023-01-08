#include <iostream>
using namespace std;

string isevenish(int number);
main() 
{
int number;
string condition;

cout<<"Enter a 5 digit number: ";
cin>>number;

condition = isevenish(number);

if (condition == "evenish")
{
    cout<<"Your number is evenish"<<endl;
}
if(condition == "oddish")
{
    cout<<"Your number is oddish"<<endl;
}
}
string isevenish (int number)
{
int digit5;
int digit4;
int digit3;
int digit2;
int digit1;
int sum;
int remainder;

digit5 = number%10;
number = number/10;
digit4 = number%10;
number = number/10;
digit3 = number%10;
number = number/10;
digit2 = number%10;
digit1 = number/10;

sum = digit1+digit2+digit3+digit4+digit5;

remainder= sum%2;
if (remainder == 0)
{
    return "evenish";
}
if(remainder != 0)
{
    return "oddish";
}
return 0;
}