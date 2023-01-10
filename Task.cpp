#include <iostream>
#include <cmath>
using namespace std;
main()
{
  system("cls");
  float base,degree,radian,result;
  base = 43;
  degree = 30;
  radian = tan(degree/57.2958);
  result = radian * base;
  cout <<"result is: "<<result;
}