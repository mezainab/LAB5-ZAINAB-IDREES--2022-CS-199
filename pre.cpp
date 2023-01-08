#include <iostream>
#include <cmath>
using namespace std;


main()
{

 int number1;
 int number2;
 int result;

 cout<<"Enter number: ";
 cin>>number1;
 cout<<"Enter number: ";
 cin>>number2;

 result = max(number1, number2);
 cout <<"Greater number is: "<<result<<endl;

 result = min(number1, number2);
 cout <<"Minimum number is: "<<result<<endl;

 result = sqrt(number1);
 cout <<"Square root is: "<<result<<endl;
 
 result = pow(number1, 3);
 cout <<"Power is: "<<result<<endl;

 result = ceil(3.9);
 cout <<"ceil : "<<result<<endl;

 result = floor(3.9);
 cout <<" floor : "<<result<<endl;
 
 result = sin(45/57.2958);
 cout <<"sin is: "<<result<<endl;


}
