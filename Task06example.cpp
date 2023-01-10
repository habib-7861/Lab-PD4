#include <iostream>
#include <cmath>
using namespace std;
float squareroot(int);
main()
{
  system("cls");
  int num;
  float result;
  cout <<"Enter number: ";
  cin >>num;
  result = squareroot(num);
  cout <<"The result is: "<<result;
}
float squareroot(int num)
{
  float square;
  square = sqrt(num);
  return square;
}