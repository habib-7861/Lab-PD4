#include <iostream>
#include <cmath>
using namespace std;
float cuberoot(float num);
float ceiling(float num);
float flooring(float num);
main()
{
  system("cls");
  float num,result;
  cout <<"Enter number: ";
  cin >>num;
  result = cuberoot(num);
  cout <<"The result is: "<<result<<endl;
  result = ceiling(num);
  cout <<"The result is: "<<result<<endl;
  result = flooring(num);
  cout <<"The result is: "<<result<<endl;
}

float cuberoot(float num)
{
  float cuberot = cbrt(num);
  return cuberot;
}

float ceiling(float num)
{
  float ceiled = ceil(num);
  return ceiled;
}

float flooring(float num)
{
  float flor = floor(num);
  return flor;
}