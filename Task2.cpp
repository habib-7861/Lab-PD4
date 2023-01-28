#include <iostream>
#include <cmath>
using namespace std;
float quadratic(float,float,float);
float quatratic(float,float,float);
main()
{
  float a;
  float b;
  float c;
  float x;
  cout <<"Enter a: ";
  cin>>a;
  cout <<"Enter b: ";
  cin>>b;
  cout <<"Enter c: ";
  cin>>c;
  x = quadratic(a,b,c);
  cout <<"Value of x: "<<x<<endl;
  x = quatratic(a,b,c);
  cout <<"Result is : "<<x<<endl;
}
float quadratic(float a,float b,float c)
{
  float d = pow(b,2);
  float e = 4*a*c;
  float f = d-e;
  float g = sqrt(f);
  float h = -b+g;
  float i = 2*a;
  float x = h/i;
  return x;
}
float quatratic(float a,float b,float c)
{
  float d = pow(b,2);
  float e = 4*a*c;
  float f = d-e;
  float g = sqrt(f);
  float h = -b-g;
  float i = 2*a;
  float x = h/i;
  return x;
}



