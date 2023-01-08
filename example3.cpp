#include <iostream>
using namespace std;

int value(int number1,int number2);
int min(int number1, int number2);

main()
{
 int number1;
 int number2;
 int result;
 cout<<" Enter number: ";
 cin>>number1;
 cout <<"Enter number: ";
 cin>>number2;
 result = value(number1, number2);
 cout << "Greater no is: " <<result<<endl;
 result = min(number1, number2);
 cout <<"Minimum number is:  "<<result<<endl;

}
int value(int number1, int number2)
{
 if (number1> number2)
 {
  return number1;
 }

 if (number1<number2)
 {
 return number2;
 }
 return 0;
}
int min(int number1, int number2)
{
 if (number1>number2)
 {
 return number2;
 }
 if (number1< number2)
 { 
 return number1;
 }
 return 0;
}

 
