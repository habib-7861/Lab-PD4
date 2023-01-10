#include <iostream>
#include <cmath>
using namespace std;
float power(int,int);
main()
{
  int num1,num2,result;
  system("cls");
  cout <<"Enter number1: ";
  cin>>num1;
  cout <<"Enter number2: ";
  cin>>num2;
  result = power(num1,num2);
  cout <<"The result is: "<<result;
}
float power(int num1,int num2)
{
  int pover;
  pover = pow(num1,num2);  
  return pover;
}