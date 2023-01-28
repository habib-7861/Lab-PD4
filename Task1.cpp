#include <iostream>
#include <cmath>
using namespace std;
float calculate(float base,float degree);
main()
{
  system("cls");
  float base;
  float degree;
  cout <<"Enter base: ";
  cin >>base;
  cout <<"Enter degree: ";
  cin >>degree;
  float heigt;
  heigt = calculate(base,degree);
  cout <<"The Height is: "<<heigt; 

}
float calculate(float base,float degree)
{
  float radian;
  float radians;
  float angle;
  float height;
  radian = 57.2958;
  radians = degree/radian;
  angle = tan(radians);
  height = angle*base;
  return height;
}