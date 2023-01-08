#include <iostream>
#include <cmath>
using namespace std;
float heightOfTree(float base, float angle);

main()
{

 float base;
 float angle;
 float height;


 cout <<"Enter base: ";
 cin >>base;
 cout <<"Enter angle: ";
 cin >>angle;

height = heightOfTree(base, angle);
cout<<"Height of Tree: "<<height<<endl; 
}

float heightOfTree(float base,float angle)
{
 
float radians;
float height;
float distance;

radians = angle/57.2958;

height = tan(radians) * base;

return height;

}
 
