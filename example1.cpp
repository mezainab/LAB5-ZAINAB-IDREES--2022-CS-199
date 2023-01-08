#include <iostream>
using namespace std;

void add(int number1,int number2);
void divide(float number1, float number2);
main()
{
 int number1;
 int number2;
 

 cout<<"Enter no1: ";
 cin>>number1;
 cout<<"Enter no2: ";
 cin>>number2;

 add(number1, number2);
 divide(number1, number2);
}
void add(int number1, int number2)
{
 int sum;
 sum = number1 + number2;
 cout <<"Sum is: "<<sum;

}

void divide(float number1 , float number2)
{
 float divide;
 divide = number1/number2;
 cout<<"Division is: "<<divide<<endl; 
}