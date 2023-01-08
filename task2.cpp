#include <iostream>
#include <cmath>
using namespace std;

float pos(float a, float b, float c);
float neg(float a, float b, float c);


main()
{
 
 float a;
 float b;
 float c;
 float positiveResult;
 float negativeResult;

 cout<<"Enter first number: ";
 cin>>a;
 cout<<"Enter second number: ";
 cin>>b; 
 cout<< "Enter third number: ";
 cin>>c;


 positiveResult=pos( a,  b,  c);
 negativeResult=neg( a,  b, c);
 cout <<"Your result is: "<< endl;
 cout << positiveResult<<endl;
 cout << negativeResult<<endl;

}


float pos(float a,float b,float c)
{

 float power;
 float product;
 float subtract;
 float squareroot;
 float positiveResult;
 float negativeResult;
 float sum;

 power = pow(b,2);
 product = 4*a*c;
 subtract = power - product;
 squareroot = sqrt(subtract);
 sum = -b + squareroot;
 positiveResult = sum/(2*a);

 return positiveResult;
}

float neg(float a,float b,float c)
 {
  
  float power;
  float product;
  float subtract;
  float squareroot;
  float positiveResult;
  float negativeResult;
  float sum;

  power = pow(b,2);
  product = 4*a*c;
  subtract = power - product;
  squareroot = sqrt(subtract);
  sum = -b - squareroot;
  negativeResult = sum/(2*a);

 
  return negativeResult;
 }

































 
 
 