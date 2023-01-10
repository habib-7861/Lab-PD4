#include <iostream>
#include <cmath>
using namespace std;
float sines(int num);
float coses(int num);
float tans(int num);
main()
{
  system("cls");
  int num;
  float result;
  cout <<"Enter number: ";
  cin>>num;
  result = sines(num);
  cout <<"The result is: "<<result<<endl;
  result = coses(num);
  cout <<"The result is: "<<result<<endl;
  result = tans(num);
  cout <<"The result is: "<<result<<endl;
}

float sines(int num)
{
  float sine;
  sine = sin(num/57.2958);
  return sine;
}
float coses(int num)
{
  float cose;
  cose = cos(num/57.2958);
  return cose;
}
float tans(int num)
{
  float tane;
  tane= tan(num/57.2958);
  return tane;
}