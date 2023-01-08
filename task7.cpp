#include <iostream>
#include <cmath>
using namespace std;
void poolstate(int volume, int flowRateThroughP1, int flowRateThroughP2,float absentHours);
void poolstate2(int volume, int flowRateThroughP1, int flowRateThroughP2,float absentHours);
main()
{

int volume, flowRateThroughP1, flowRateThroughP2;
float absentHours,result;

cout<<"Enter volume: "<<endl;
cin>>volume;
cout<<"Enter Flowrate through P1: "<<endl;
cin>>flowRateThroughP1;
cout<<"Enter Flowrate through P2: "<<endl;
cin>>flowRateThroughP2;
cout<<" Enter hours for which worker was absent: "<<endl;
cin>>absentHours;

poolstate(volume, flowRateThroughP1, flowRateThroughP2, absentHours);
poolstate2(volume,flowRateThroughP1, flowRateThroughP2, absentHours);

}
void poolstate(int volume, int flowRateThroughP1, int flowRateThroughP2,float absentHours)
{
    float result;
    float poolfill = (flowRateThroughP1 * absentHours + flowRateThroughP2 * absentHours);
    float contributionOfP1 = ((flowRateThroughP1*absentHours)/poolfill)*100;
    contributionOfP1 = floor(contributionOfP1);
    float contributionOfP2 = ((flowRateThroughP2*absentHours)/poolfill)*100;
    contributionOfP2 = floor(contributionOfP2);
    float poolfillPercentage = (poolfill/volume)*100;
    poolfillPercentage = floor(poolfillPercentage);

  if (poolfill > volume)
  {
    float overflow = poolfill - volume;

    cout<<"pool overflows with liters: "<<overflow<<"in time : "<<absentHours;

  }
}
  void poolstate2(int volume, int flowRateThroughP1, int flowRateThroughP2,float absentHours)
{
    float result;
    float poolfill = (flowRateThroughP1*absentHours + flowRateThroughP2*absentHours);
    float contributionOfP1 = ((flowRateThroughP1*absentHours)/poolfill)*100;
    contributionOfP1 = floor(contributionOfP1);
    float contributionOfP2 = ((flowRateThroughP2*absentHours)/poolfill)*100;
    contributionOfP2 = floor(contributionOfP2);
    float poolfillPercentage = (poolfill/volume)*100;
    poolfillPercentage = floor(poolfillPercentage);

  if (poolfill < volume)
  {
    cout<<"The pool is filled: "<<poolfillPercentage<<"Pipe 1: "<<contributionOfP1<<"Pipe 2: "<<contributionOfP2<<endl;
  }
    
}
